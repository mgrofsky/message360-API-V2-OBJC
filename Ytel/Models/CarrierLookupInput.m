//
//  CarrierLookupInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "CarrierLookupInput.h"

@implementation CarrierLookupInput

/**
* A valid 10-digit number (E.164 format).
*/
@synthesize phoneNumber;

/**
* Response type format xml or json
*/
@synthesize responseType;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
    }
    return self;
}

@end