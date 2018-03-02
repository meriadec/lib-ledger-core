// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto.djinni

#ifndef DJINNI_GENERATED_HASHALGORITHMHELPER_HPP
#define DJINNI_GENERATED_HASHALGORITHMHELPER_HPP

#include <cstdint>
#include <vector>

namespace ledger { namespace core { namespace api {

class HashAlgorithmHelper {
public:
    virtual ~HashAlgorithmHelper() {}

    virtual std::vector<uint8_t> ripemd160(const std::vector<uint8_t> & data) = 0;

    virtual std::vector<uint8_t> sha256(const std::vector<uint8_t> & data) = 0;

    virtual std::vector<uint8_t> keccak256(const std::vector<uint8_t> & data) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_HASHALGORITHMHELPER_HPP