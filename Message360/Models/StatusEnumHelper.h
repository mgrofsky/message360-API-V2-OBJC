//
//  StatusEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_STATUSENUMHELPER
#define APIMATIC_STATUSENUMHELPER

#include "StatusEnum.h"

/**
* Helper class interface for StatusEnum to NSString conversion
*/
@interface StatusEnumHelper : NSObject

+(id) stringFromStatusEnum:(enum StatusEnum) statusEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromStatusEnumArray:(NSArray<NSNumber*>*) array;


+(enum StatusEnum) statusEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) statusEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif