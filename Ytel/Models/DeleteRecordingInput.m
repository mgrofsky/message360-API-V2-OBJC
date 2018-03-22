//
//  DeleteRecordingInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "DeleteRecordingInput.h"

@implementation DeleteRecordingInput

/**
* The unique identifier for a recording.
*/
@synthesize recordingsid;

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