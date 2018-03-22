//
//  UpdateDedicatedShortCodeAssignmentInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "UpdateDedicatedShortCodeAssignmentInput.h"

@implementation UpdateDedicatedShortCodeAssignmentInput

/**
* List of valid dedicated shortcode to your Ytel account.
*/
@synthesize shortcode;

/**
* Response type format xml or json
*/
@synthesize responseType;

/**
* User generated name of the dedicated shortcode.
*/
@synthesize friendlyName;

/**
* Specifies the HTTP method used to request the required StatusCallBackUrl once call connects.
*/
@synthesize callbackMethod;

/**
* URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the call is finished.
*/
@synthesize callbackUrl;

/**
* Specifies the HTTP method used to request the required FallbackUrl once call connects.
*/
@synthesize fallbackMethod;

/**
* URL used if any errors occur during execution of InboundXML or at initial request of the required Url provided with the POST.
*/
@synthesize fallbackUrl;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
    }
    return self;
}

@end