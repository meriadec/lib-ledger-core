// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "RCTCoreLGAddress.h"


@implementation RCTCoreLGAddress
//Export module
RCT_EXPORT_MODULE(RCTCoreLGAddress)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGAddress alloc] init];
    }
    return self;
}

/**
 * Gets an optional derivation path (if the address is owned by an account)
 * @return The derivation path of the address
 */
RCT_REMAP_METHOD(getDerivationPath,getDerivationPathWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl getDerivationPath]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::getDerivationPath", nil);
    }
}

/**
 * Serialize the address to a string. The serialization method depends of the underlying currency and
 * format (Base58, Bech32, Ethereum...)
 */
RCT_REMAP_METHOD(toString,toStringWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl toString]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::toString", nil);
    }
}

RCT_REMAP_METHOD(asBitcoinLikeAddress,asBitcoinLikeAddressWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl asBitcoinLikeAddress]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::asBitcoinLikeAddress", nil);
    }
}

RCT_REMAP_METHOD(isInstanceOfBitcoinLikeAddress,isInstanceOfBitcoinLikeAddressWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :@([self.objcImpl isInstanceOfBitcoinLikeAddress])};if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::isInstanceOfBitcoinLikeAddress", nil);
    }
}

RCT_REMAP_METHOD(getCurrency,getCurrencyWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl getCurrency]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::getCurrency", nil);
    }
}

/**
 * Attempt to parse a string address. If the address can be parse return it otherwise return a NONE
 * (depending on you host this may be a null, nil, None...)
 * @param address The string to parse
 * @param currency The currency used to parse the address
 * @return If successful returns the address object otherwise null.
 */
RCT_REMAP_METHOD(parse,parse:(nonnull NSString *)address
                    currency:(nonnull LGCurrency *)currency withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[LGAddress parse:address currency:currency]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::parse", nil);
    }
}

/**
 * Checks if the given string formatted address is valid or not.
 * @param address The string to parse
 * @param currency The currency used to parse the address
 * @return If successful returns true, false otherwise.
 */
RCT_REMAP_METHOD(isValid,isValid:(nonnull NSString *)address
                        currency:(nonnull LGCurrency *)currency withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :@([LGAddress isValid:address currency:currency])};if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGAddress::isValid", nil);
    }
}
@end
