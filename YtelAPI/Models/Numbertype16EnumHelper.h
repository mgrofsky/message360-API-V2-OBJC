//
//  Numbertype16Enum.h
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_NUMBERTYPE16ENUMHELPER
#define APIMATIC_NUMBERTYPE16ENUMHELPER

#include "Numbertype16Enum.h"

/**
* Helper class interface for Numbertype16Enum to NSString conversion
*/
@interface Numbertype16EnumHelper : NSObject

+(id) stringFromNumbertype16Enum:(enum Numbertype16Enum) numbertype16Enum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromNumbertype16EnumArray:(NSArray<NSNumber*>*) array;


+(enum Numbertype16Enum) numbertype16EnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) numbertype16EnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif