//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "ProductCode27EnumHelper.h"

/**
* Helper class implementation for ProductCode27Enum to NSString conversion
*/
@implementation ProductCode27EnumHelper

+(id) stringFromProductCode27Enum:(enum ProductCode27Enum) productCode27Enum withDefault: (id) defaultValue
{
    switch(productCode27Enum)
    {
        case ProductCode27ALL:
            return @"0";

        case ProductCode27Enum1:
            return @"1";

        case ProductCode27Enum2:
            return @"2";

        case ProductCode27Enum3:
            return @"3";

        case ProductCode27Enum4:
            return @"4";

        case ProductCode27Transcription:
            return @"5";

        case ProductCode27Email:
            return @"6";

        case ProductCode27Conference:
            return @"7";

        case ProductCode27Carrier:
            return @"8";

        case ProductCode27Enum9:
            return @"9";

        case ProductCode27Enum10:
            return @"10";

        case ProductCode27Enum11:
            return @"11";

        case ProductCode27Enum12:
            return @"12";

        case ProductCode27Enum13:
            return @"13";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromProductCode27EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [ProductCode27EnumHelper stringFromProductCode27Enum:(enum ProductCode27Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum ProductCode27Enum) productCode27EnumFromString:(NSString*) strValue
{
    NSArray* ProductCode27EnumArray = [NSArray arrayWithObjects:
                                        @"0",
                                        @"1",
                                        @"2",
                                        @"3",
                                        @"4",
                                        @"5",
                                        @"6",
                                        @"7",
                                        @"8",
                                        @"9",
                                        @"10",
                                        @"11",
                                        @"12",
                                        @"13",
                                        nil];

    return (enum ProductCode27Enum) [ProductCode27EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) productCode27EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ ProductCode27EnumHelper productCode27EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end