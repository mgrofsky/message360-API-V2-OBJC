//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "AudioDirection29EnumHelper.h"

/**
* Helper class implementation for AudioDirection29Enum to NSString conversion
*/
@implementation AudioDirection29EnumHelper

+(id) stringFromAudioDirection29Enum:(enum AudioDirection29Enum) audioDirection29Enum withDefault: (id) defaultValue
{
    switch(audioDirection29Enum)
    {
        case AudioDirection29IN:
            return @"in";

        case AudioDirection29OUT:
            return @"out";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromAudioDirection29EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [AudioDirection29EnumHelper stringFromAudioDirection29Enum:(enum AudioDirection29Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum AudioDirection29Enum) audioDirection29EnumFromString:(NSString*) strValue
{
    NSArray* AudioDirection29EnumArray = [NSArray arrayWithObjects:
                                        @"in",
                                        @"out",
                                        nil];

    return (enum AudioDirection29Enum) [AudioDirection29EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) audioDirection29EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ AudioDirection29EnumHelper audioDirection29EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end