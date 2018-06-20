//
//  Numbertype16Enum.h
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#include "Numbertype16EnumHelper.h"

/**
* Helper class implementation for Numbertype16Enum to NSString conversion
*/
@implementation Numbertype16EnumHelper

+(id) stringFromNumbertype16Enum:(enum Numbertype16Enum) numbertype16Enum withDefault: (id) defaultValue
{
    switch(numbertype16Enum)
    {
        case Numbertype16ALL:
            return @"all";

        case Numbertype16Voice:
            return @"voice";

        case Numbertype16SMS:
            return @"sms";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromNumbertype16EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [Numbertype16EnumHelper stringFromNumbertype16Enum:(enum Numbertype16Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum Numbertype16Enum) numbertype16EnumFromString:(NSString*) strValue
{
    NSArray* Numbertype16EnumArray = [NSArray arrayWithObjects:
                                        @"all",
                                        @"voice",
                                        @"sms",
                                        nil];

    return (enum Numbertype16Enum) [Numbertype16EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) numbertype16EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ Numbertype16EnumHelper numbertype16EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end