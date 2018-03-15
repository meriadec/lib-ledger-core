#!/usr/bin/env bash

cd ../lib-ledger-core-build
echo "=====> lib-ledger-core-build/core/lib/sqlite3"
ls -la core/lib/sqlite3


echo "=====> lib-ledger-core-build/core/src/libledger-core.so"
objdump -t core/src/libledger-core.so | grep sqlite3_open_
