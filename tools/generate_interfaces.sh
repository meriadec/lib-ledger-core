#!/usr/bin/env bash
# Generate library API with djinni

echo "Generating core API"
if [[ $# -gt 0 ]] ; then
    trace="true";
else
    trace="false";
fi
echo "Enable debug compilation " $trace
CORE_CPP_API_DIRECTORY=core/src/api
CORE_CPP_JNI_DIRECTORY=core/src/jni

# export-header-name : is the name of header generated by CMake command
# "generate_export_header", it allows to export global data symbols in dlls.
# This option is MANDATORY in case of msvc (2015) build.
# This option will be the name of the imported header and the correponding variable (defined
# by EXPORT_MACRO_NAME option) should be exactly same name in upper case

rm -rf $CORE_CPP_API_DIRECTORY $CORE_CPP_JNI_DIRECTORY
./djinni/src/run    --idl ./core/core.djinni \
                    --cpp-out $CORE_CPP_API_DIRECTORY \
                    --cpp-namespace ledger::core::api \
                    --cpp-optional-template std::experimental::optional \
                    --cpp-optional-header "\"../utils/optional.hpp\"" \
                    --jni-include-cpp-prefix "../../api/" \
                    --jni-out $CORE_CPP_JNI_DIRECTORY/jni \
                    --java-out api/core/java \
                    --java-package co.ledger.core \
                    --swift-out api/core/swift \
                    --swift-umbrella-header ledger-core.h \
                    --objc-type-prefix LG \
                    --objc-out api/core/objc \
                    --objcpp-out api/core/objcpp \
                    --node-out api/core/nodejs \
					--node-type-prefix NJS \
        			--node-include-cpp ../../../$CORE_CPP_API_DIRECTORY \
        			--node-package ledgerapp_nodejs \
        			--react-native-out api/core/react-native/LibLedgerCore/ios/Sources \
					--react-native-type-prefix RCTCore \
					--react-include-objc-impl  ../../../../src/objc \
					--react-native-objc-impl-suffix Impl \
					--export-header-name libcore_export \
                    --trace $trace

cp ./djinni/support-lib/jni/* $CORE_CPP_JNI_DIRECTORY/jni
cp ./djinni/support-lib/*.hpp $CORE_CPP_JNI_DIRECTORY


