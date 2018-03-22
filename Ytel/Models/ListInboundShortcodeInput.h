//
//  ListInboundShortcodeInput.h
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_LISTINBOUNDSHORTCODEINPUT
#define APIMATIC_LISTINBOUNDSHORTCODEINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol ListInboundShortcodeInput
@end

@interface ListInboundShortcodeInput : NSObject

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* The page count to retrieve from the total results in the collection. Page indexing starts at 1.
*/
@property int page;

/**
* Number of individual resources listed in the response per page
*/
@property int pagesize;

/**
* Only list SMS messages sent from this number
*/
@property NSString* from;

/**
* Only list SMS messages sent to Shortcode
*/
@property NSString* shortcode;

/**
* Only list SMS messages sent in the specified date MAKE REQUEST
*/
@property NSString* datecreated;

@end
#endif