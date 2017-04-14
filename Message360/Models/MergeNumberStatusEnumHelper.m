//
//  MergeNumberStatusEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#include "MergeNumberStatusEnumHelper.h"

/**
* Helper class implementation for MergeNumberStatusEnum to NSString conversion
*/
@implementation MergeNumberStatusEnumHelper

+(id) stringFromMergeNumberStatusEnum:(enum MergeNumberStatusEnum) mergeNumberStatusEnum withDefault: (id) defaultValue
{
    switch(mergeNumberStatusEnum)
    {
        case MergeNumberStatusDelete:
            return @"0";

        case MergeNumberStatusMerge:
            return @"1";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromMergeNumberStatusEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [MergeNumberStatusEnumHelper stringFromMergeNumberStatusEnum:(enum MergeNumberStatusEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum MergeNumberStatusEnum) mergeNumberStatusEnumFromString:(NSString*) strValue
{
    NSArray* MergeNumberStatusEnumArray = [NSArray arrayWithObjects:
                                        @"0",
                                        @"1",
                                        nil];

    return (enum MergeNumberStatusEnum) [MergeNumberStatusEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) mergeNumberStatusEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ MergeNumberStatusEnumHelper mergeNumberStatusEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end