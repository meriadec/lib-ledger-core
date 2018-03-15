#!/usr/bin/env bash

cd ../lib-ledger-core-build
echo "=====> lib-ledger-core-build/core/lib/sqlite3"
ls -la core/lib/sqlite3


echo "=====> lib-ledger-core-build/core/src/libledger-core.so"
objdump -t core/src/libledger-core.so | grep sqlite3_open_

echo "=====> lib-ledger-core-build/core/lib/sqlite3/libsqlite3.a"
nm core/lib/sqlite3/libsqlite3.a | grep sqlite3_open_
