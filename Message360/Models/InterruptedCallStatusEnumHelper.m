//
//  InterruptedCallStatusEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#include "InterruptedCallStatusEnumHelper.h"

/**
* Helper class implementation for InterruptedCallStatusEnum to NSString conversion
*/
@implementation InterruptedCallStatusEnumHelper

+(id) stringFromInterruptedCallStatusEnum:(enum InterruptedCallStatusEnum) interruptedCallStatusEnum withDefault: (id) defaultValue
{
    switch(interruptedCallStatusEnum)
    {
        case InterruptedCallStatusCANCELED:
            return @"canceled";

        case InterruptedCallStatusCOMPLETED:
            return @"completed";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromInterruptedCallStatusEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [InterruptedCallStatusEnumHelper stringFromInterruptedCallStatusEnum:(enum InterruptedCallStatusEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum InterruptedCallStatusEnum) interruptedCallStatusEnumFromString:(NSString*) strValue
{
    NSArray* InterruptedCallStatusEnumArray = [NSArray arrayWithObjects:
                                        @"canceled",
                                        @"completed",
                                        nil];

    return (enum InterruptedCallStatusEnum) [InterruptedCallStatusEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) interruptedCallStatusEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ InterruptedCallStatusEnumHelper interruptedCallStatusEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end