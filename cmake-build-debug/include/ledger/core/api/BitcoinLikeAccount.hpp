// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEACCOUNT_HPP
#define DJINNI_GENERATED_BITCOINLIKEACCOUNT_HPP

#include <cstdint>
#include <memory>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class BitcoinLikeOutput;
class BitcoinLikeOutputListCallback;
class BitcoinLikePreparedTransactionCallback;
class BitcoinLikeTransactionRequestCallback;
class I32Callback;
class StringCallback;
enum class BitcoinLikePickingStrategy;
struct BitcoinLikeTransactionRequest;

class BitcoinLikeAccount {
public:
    virtual ~BitcoinLikeAccount() {}

    virtual void getUTXO(int32_t from, int32_t to, const std::shared_ptr<BitcoinLikeOutputListCallback> & callback) = 0;

    virtual void getUTXOCount(const std::shared_ptr<I32Callback> & callback) = 0;

    virtual void pickUTXO(const std::shared_ptr<Amount> & baseFees, const std::vector<std::shared_ptr<BitcoinLikeOutput>> & outputs, BitcoinLikePickingStrategy strategy, const std::shared_ptr<BitcoinLikeTransactionRequestCallback> & callback) = 0;

    virtual void estimateFees(const BitcoinLikeTransactionRequest & request, const std::shared_ptr<BitcoinLikeTransactionRequestCallback> & callback) = 0;

    virtual void prepareTransaction(const BitcoinLikeTransactionRequest & request, const std::shared_ptr<BitcoinLikePreparedTransactionCallback> & callback) = 0;

    virtual void broadcastTransaction(const std::vector<uint8_t> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEACCOUNT_HPP