//
//  UpdateDedicatedShortCodeAssignmentInput.h
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_UPDATEDEDICATEDSHORTCODEASSIGNMENTINPUT
#define APIMATIC_UPDATEDEDICATEDSHORTCODEASSIGNMENTINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol UpdateDedicatedShortCodeAssignmentInput
@end

@interface UpdateDedicatedShortCodeAssignmentInput : NSObject

/**
* List of valid dedicated shortcode to your Ytel account.
*/
@property NSString* shortcode;

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* User generated name of the dedicated shortcode.
*/
@property NSString* friendlyName;

/**
* Specifies the HTTP method used to request the required StatusCallBackUrl once call connects.
*/
@property NSString* callbackMethod;

/**
* URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the call is finished.
*/
@property NSString* callbackUrl;

/**
* Specifies the HTTP method used to request the required FallbackUrl once call connects.
*/
@property NSString* fallbackMethod;

/**
* URL used if any errors occur during execution of InboundXML or at initial request of the required Url provided with the POST.
*/
@property NSString* fallbackUrl;

@end
#endif