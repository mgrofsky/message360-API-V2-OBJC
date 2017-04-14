//
//  CreateAvailablePhoneNumberInput.m
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#import "CreateAvailablePhoneNumberInput.h"

@implementation CreateAvailablePhoneNumberInput

/**
* Number type either SMS,Voice or all
*/
@synthesize numberType;

/**
* Phone Number Area Code
*/
@synthesize areaCode;

/**
* Page Size
*/
@synthesize pageSize;

/**
* Response type format xml or json
*/
@synthesize responseType;

-(id)init
{
    if (self = [super init])
    {
        self.pageSize = 10;
        self.responseType = @"json";
    }
    return self;
}

 /**
 * For serialization of enum NumberTypeEnum type property as NSString*
 */
-(id) JSONObjectForNumberType
{
     
    return [NumberTypeEnumHelper stringFromNumberTypeEnum:(enum NumberTypeEnum) numberType withDefault: nil];

}

/**
 * For deserialization of enum NumberTypeEnum type property from NSString*
 */
 
-(void)setNumberTypeWithNSString:(NSString*) strValue
{
    numberType = [NumberTypeEnumHelper numberTypeEnumFromString:(NSString*) strValue];
}


@end