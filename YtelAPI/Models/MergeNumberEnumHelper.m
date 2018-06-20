//
//  MergeNumberEnum.h
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#include "MergeNumberEnumHelper.h"

/**
* Helper class implementation for MergeNumberEnum to NSString conversion
*/
@implementation MergeNumberEnumHelper

+(id) stringFromMergeNumberEnum:(enum MergeNumberEnum) mergeNumberEnum withDefault: (id) defaultValue
{
    switch(mergeNumberEnum)
    {
        case MergeNumberDelete:
            return @"0";

        case MergeNumberMerge:
            return @"1";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromMergeNumberEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [MergeNumberEnumHelper stringFromMergeNumberEnum:(enum MergeNumberEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum MergeNumberEnum) mergeNumberEnumFromString:(NSString*) strValue
{
    NSArray* MergeNumberEnumArray = [NSArray arrayWithObjects:
                                        @"0",
                                        @"1",
                                        nil];

    return (enum MergeNumberEnum) [MergeNumberEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) mergeNumberEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ MergeNumberEnumHelper mergeNumberEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end