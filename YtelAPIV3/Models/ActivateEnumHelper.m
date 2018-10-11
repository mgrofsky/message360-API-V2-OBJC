//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "ActivateEnumHelper.h"

/**
* Helper class implementation for ActivateEnum to NSString conversion
*/
@implementation ActivateEnumHelper

+(id) stringFromActivateEnum:(enum ActivateEnum) activateEnum withDefault: (id) defaultValue
{
    switch(activateEnum)
    {
        case ActivateMActivate:
            return @"1";

        case ActivateDeActivate:
            return @"0";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromActivateEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [ActivateEnumHelper stringFromActivateEnum:(enum ActivateEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum ActivateEnum) activateEnumFromString:(NSString*) strValue
{
    NSArray* ActivateEnumArray = [NSArray arrayWithObjects:
                                        @"1",
                                        @"0",
                                        nil];

    return (enum ActivateEnum) [ActivateEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) activateEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ ActivateEnumHelper activateEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end