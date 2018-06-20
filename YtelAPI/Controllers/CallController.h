//
//  CallController.h
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "PlayDtmfDirectionEnum.h"
#import "PlayDtmfDirectionEnumHelper.h"
#import "CreateCallsSenddigitsInput.h"
#import "CreateCallsMakervmInput.h"
#import "CreateCallsListcallsInput.h"
#import "Status24Enum.h"
#import "Status24EnumHelper.h"
#import "CreateCallsInterruptcallsInput.h"
#import "DirectionEnum.h"
#import "DirectionEnumHelper.h"
#import "FileformatEnum.h"
#import "FileformatEnumHelper.h"
#import "CreateCallsRecordcallsInput.h"
#import "CreateCallsPlayaudiosInput.h"
#import "AudioDirectionEnum.h"
#import "AudioDirectionEnumHelper.h"
#import "CreateCallsVoiceeffectInput.h"
#import "GroupConfirmFileEnum.h"
#import "GroupConfirmFileEnumHelper.h"
#import "CreateCallsGroupcallInput.h"
#import "IfMachineEnum.h"
#import "IfMachineEnumHelper.h"
#import "CreateCallsMakecallInput.h"

@interface CallController : BaseController

/**
* Completion block definition for asynchronous call to CallsViewcalldetail */
typedef void (^CompletedPostCallsViewcalldetail)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single voice call’s information by its CallSid.
* @param    callSid    Required parameter: The unique identifier for the voice call.
*/
- (void) createCallsViewcalldetailAsyncWithCallSid:(NSString*) callSid
                completionBlock:(CompletedPostCallsViewcalldetail) onCompleted;

/**
* Completion block definition for asynchronous call to CallsViewcalls */
typedef void (^CompletedPostCallsViewcalls)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single voice call’s information by its CallSid.
* @param    callsid    Required parameter: The unique identifier for the voice call.
*/
- (void) createCallsViewcallsAsyncWithCallsid:(NSString*) callsid
                completionBlock:(CompletedPostCallsViewcalls) onCompleted;

/**
* Completion block definition for asynchronous call to CallsSenddigits */
typedef void (^CompletedPostCallsSenddigits)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Play Dtmf and send the Digit
* @param  CreateCallsSenddigitsInput     Object with all parameters
*/
- (void) createCallsSenddigitsAsyncWithCreateCallsSenddigitsInput:(CreateCallsSenddigitsInput*) input
                completionBlock:(CompletedPostCallsSenddigits) onCompleted;

/**
* Completion block definition for asynchronous call to CallsMakervm */
typedef void (^CompletedPostCallsMakervm)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Initiate an outbound Ringless Voicemail through Ytel.
* @param  CreateCallsMakervmInput     Object with all parameters
*/
- (void) createCallsMakervmAsyncWithCreateCallsMakervmInput:(CreateCallsMakervmInput*) input
                completionBlock:(CompletedPostCallsMakervm) onCompleted;

/**
* Completion block definition for asynchronous call to CallsListcalls */
typedef void (^CompletedPostCallsListcalls)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* A list of calls associated with your Ytel account
* @param  CreateCallsListcallsInput     Object with all parameters
*/
- (void) createCallsListcallsAsyncWithCreateCallsListcallsInput:(CreateCallsListcallsInput*) input
                completionBlock:(CompletedPostCallsListcalls) onCompleted;

/**
* Completion block definition for asynchronous call to CallsInterruptcalls */
typedef void (^CompletedPostCallsInterruptcalls)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Interrupt the Call by Call Sid
* @param  CreateCallsInterruptcallsInput     Object with all parameters
*/
- (void) createCallsInterruptcallsAsyncWithCreateCallsInterruptcallsInput:(CreateCallsInterruptcallsInput*) input
                completionBlock:(CompletedPostCallsInterruptcalls) onCompleted;

/**
* Completion block definition for asynchronous call to CallsRecordcalls */
typedef void (^CompletedPostCallsRecordcalls)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Start or stop recording of an in-progress voice call.
* @param  CreateCallsRecordcallsInput     Object with all parameters
*/
- (void) createCallsRecordcallsAsyncWithCreateCallsRecordcallsInput:(CreateCallsRecordcallsInput*) input
                completionBlock:(CompletedPostCallsRecordcalls) onCompleted;

/**
* Completion block definition for asynchronous call to CallsPlayaudios */
typedef void (^CompletedPostCallsPlayaudios)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Play Audio from a url
* @param  CreateCallsPlayaudiosInput     Object with all parameters
*/
- (void) createCallsPlayaudiosAsyncWithCreateCallsPlayaudiosInput:(CreateCallsPlayaudiosInput*) input
                completionBlock:(CompletedPostCallsPlayaudios) onCompleted;

/**
* Completion block definition for asynchronous call to CallsVoiceeffect */
typedef void (^CompletedPostCallsVoiceeffect)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Add audio voice effects to the an in-progress voice call.
* @param  CreateCallsVoiceeffectInput     Object with all parameters
*/
- (void) createCallsVoiceeffectAsyncWithCreateCallsVoiceeffectInput:(CreateCallsVoiceeffectInput*) input
                completionBlock:(CompletedPostCallsVoiceeffect) onCompleted;

/**
* Completion block definition for asynchronous call to CallsGroupcall */
typedef void (^CompletedPostCallsGroupcall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Group Call
* @param  CreateCallsGroupcallInput     Object with all parameters
*/
- (void) createCallsGroupcallAsyncWithCreateCallsGroupcallInput:(CreateCallsGroupcallInput*) input
                completionBlock:(CompletedPostCallsGroupcall) onCompleted;

/**
* Completion block definition for asynchronous call to CallsMakecall */
typedef void (^CompletedPostCallsMakecall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* You can experiment with initiating a call through Ytel and view the request response generated when doing so and get the response in json
* @param  CreateCallsMakecallInput     Object with all parameters
*/
- (void) createCallsMakecallAsyncWithCreateCallsMakecallInput:(CreateCallsMakecallInput*) input
                completionBlock:(CompletedPostCallsMakecall) onCompleted;

@end