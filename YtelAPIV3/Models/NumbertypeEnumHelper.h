//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#ifndef APIMATIC_NUMBERTYPEENUMHELPER
#define APIMATIC_NUMBERTYPEENUMHELPER

#include "NumbertypeEnum.h"

/**
* Helper class interface for NumbertypeEnum to NSString conversion
*/
@interface NumbertypeEnumHelper : NSObject

+(id) stringFromNumbertypeEnum:(enum NumbertypeEnum) numbertypeEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromNumbertypeEnumArray:(NSArray<NSNumber*>*) array;


+(enum NumbertypeEnum) numbertypeEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) numbertypeEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif