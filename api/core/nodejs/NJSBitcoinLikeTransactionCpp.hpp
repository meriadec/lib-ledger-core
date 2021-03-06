// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKETRANSACTION_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKETRANSACTION_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/EstimatedSize.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSBitcoinLikeBlockCpp.hpp"
#include "NJSBitcoinLikeInputCpp.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeTransaction.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeTransaction: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeTransaction() {};
    NJSBitcoinLikeTransaction(const std::shared_ptr<ledger::core::api::BitcoinLikeTransaction> &iBitcoinLikeTransaction):_BitcoinLikeTransaction(iBitcoinLikeTransaction){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeTransaction> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeTransaction_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeTransaction> getCppImpl(){return _BitcoinLikeTransaction;};

private:
    /** Get the hash of the transaction. */
    static NAN_METHOD(getHash);

    /** Get the input of the transaction */
    static NAN_METHOD(getInputs);

    /** Get the output of the transaction */
    static NAN_METHOD(getOutputs);

    /** Get the block in which the transaction is inserted if the transaction is confirmed. */
    static NAN_METHOD(getBlock);

    /** Get the lock time of the transaction. */
    static NAN_METHOD(getLockTime);

    /** Get the amount of fees of the transaction. */
    static NAN_METHOD(getFees);

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    static NAN_METHOD(getTime);

    /** Get the timestamps serialized in the raw transaction if the underlying currency handles it. */
    static NAN_METHOD(getTimestamp);

    /** Serialize the transaction to its raw format. */
    static NAN_METHOD(serialize);

    /** Serialize outputs of the raw transaction into a byte array using the bitcoin transaction format. */
    static NAN_METHOD(serializeOutputs);

    /** Get the witness if the underlying transaction is a segwit transaction. */
    static NAN_METHOD(getWitness);

    /**
     * Estimate the size of the raw transaction in bytes. This method returns a minimum estimated size and a maximum estimated
     * size.
     */
    static NAN_METHOD(getEstimatedSize);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::BitcoinLikeTransaction> _BitcoinLikeTransaction;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKETRANSACTION_HPP
