// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#import "RCTCoreLGEventPublisher.h"


@implementation RCTCoreLGEventPublisher
//Export module
RCT_EXPORT_MODULE(RCTCoreLGEventPublisher)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGEventPublisher alloc] init];
    }
    return self;
}

/**
 *Get event bus through which publisher broadcast its events
 *@return EventBus object
 */
RCT_REMAP_METHOD(getEventBus,getEventBusWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl getEventBus]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGEventPublisher::getEventBus", nil);
    }
}

/**
 *Broadcast an event through eventbus (to all subscribed receivers to this EventBus)
 *@param event, Event object
 */
RCT_REMAP_METHOD(post,post:(nullable LGEvent *)event) {

    [self.objcImpl post:event];
}

/**
 *Same as post method but with an sticky event
 *@param event, Event object
 *@param tag, 32 bits integer, tag of sticky event
 */
RCT_REMAP_METHOD(postSticky,postSticky:(nullable LGEvent *)event
                                   tag:(int32_t)tag) {

    [self.objcImpl postSticky:event tag:tag];
}

/**
 *Relay an event to another EventBus (other than EventPublisher's event bus)
 *@param bus, EventBus object, through which we want to broadcast EventPublisher's event to EventPublisher's receiver
 */
RCT_REMAP_METHOD(relay,relay:(nullable LGEventBus *)bus) {

    [self.objcImpl relay:bus];
}

/**
 *Create a new instance of EventPublisher class
 *@param context, executionContext object, context in which event publisher broadcast its events
 */
RCT_REMAP_METHOD(newInstance,newInstance:(nullable id<LGExecutionContext>)context withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[LGEventPublisher newInstance:context]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGEventPublisher::newInstance", nil);
    }
}
@end
