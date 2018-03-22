//
//  CreateConferenceInput.h
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATECONFERENCEINPUT
#define APIMATIC_CREATECONFERENCEINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "HttpActionEnum.h"
#import "HttpActionEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol CreateConferenceInput
@end

@interface CreateConferenceInput : NSObject

/**
* A valid 10-digit number (E.164 format) that will be initiating the conference call.
*/
@property NSString* from;

/**
* A valid 10-digit number (E.164 format) that is to receive the conference call.
*/
@property NSString* to;

/**
* URL requested once the conference connects
*/
@property NSString* url;

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* Specifies the HTTP method used to request the required URL once call connects.
*/
@property enum HttpActionEnum method;

/**
* URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the conference is finished.
*/
@property NSString* statusCallBackUrl;

/**
* Specifies the HTTP methodlinkclass used to request StatusCallbackUrl.
*/
@property enum HttpActionEnum statusCallBackMethod;

/**
* URL requested if the initial Url parameter fails or encounters an error
*/
@property NSString* fallbackUrl;

/**
* Specifies the HTTP method used to request the required FallbackUrl once call connects.
*/
@property enum HttpActionEnum fallbackMethod;

/**
* Specifies if the conference should be recorded.
*/
@property NSNumber* record;

/**
* Recording parameters will be sent here upon completion.
*/
@property NSString* recordCallBackUrl;

/**
* Specifies the HTTP method used to request the required URL once conference connects.
*/
@property enum HttpActionEnum recordCallBackMethod;

/**
* Schedule conference in future. Schedule time must be greater than current time
*/
@property NSString* scheduleTime;

/**
* The number of seconds the call stays on the line while waiting for an answer. The max time limit is 999 and the default limit is 60 seconds but lower times can be set.
*/
@property NSNumber* timeout;

@end
#endif