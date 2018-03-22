//
//  ViewAreaMailInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "ViewAreaMailInput.h"

@implementation ViewAreaMailInput

/**
* The unique identifier for an AreaMail object.
*/
@synthesize areamailid;

/**
* Response Type either json or xml
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