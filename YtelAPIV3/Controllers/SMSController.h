//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"

@interface SMSController : BaseController

/**
* Completion block definition for asynchronous call to View SMS1 */
typedef void (^CompletedPostViewSMS1)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single SMS message object with details by its SmsSid.
* @param    messageSid    Required parameter: The unique identifier for a sms message.
*/
- (void) createViewSMS1AsyncWithMessageSid:(NSString*) messageSid
                completionBlock:(CompletedPostViewSMS1) onCompleted;

/**
* Completion block definition for asynchronous call to View SMS */
typedef void (^CompletedPostViewSMS)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single SMS message object by its SmsSid.
* @param    messageSid    Required parameter: The unique identifier for a sms message.
*/
- (void) createViewSMSAsyncWithMessageSid:(NSString*) messageSid
                completionBlock:(CompletedPostViewSMS) onCompleted;

/**
* Completion block definition for asynchronous call to Send SMS */
typedef void (^CompletedPostSendSMS)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Send an SMS from a Ytel number
* @param    from    Required parameter: The 10-digit SMS-enabled Ytel number (E.164 format) in which the message is sent.
* @param    to    Required parameter: The 10-digit phone number (E.164 format) that will receive the message.
* @param    body    Required parameter: The body message that is to be sent in the text.
* @param    method    Optional parameter: Specifies the HTTP method used to request the required URL once SMS sent.
* @param    messageStatusCallback    Optional parameter: URL that can be requested to receive notification when SMS has Sent. A set of default parameters will be sent here once the SMS is finished.
* @param    smartsms    Optional parameter: Check's 'to' number can receive sms or not using Carrier API, if wireless = true then text sms is sent, else wireless = false then call is recieved to end user with audible message.
* @param    deliveryStatus    Optional parameter: Delivery reports are a method to tell your system if the message has arrived on the destination phone.
*/
- (void) createSendSMSAsyncWithFrom:(NSString*) from
                to:(NSString*) to
                body:(NSString*) body
                method:(NSString*) method
                messageStatusCallback:(NSString*) messageStatusCallback
                smartsms:(NSNumber*) smartsms
                deliveryStatus:(NSNumber*) deliveryStatus
                completionBlock:(CompletedPostSendSMS) onCompleted;

/**
* Completion block definition for asynchronous call to List SMS */
typedef void (^CompletedPostListSMS)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of Outbound SMS message objects.
* @param    page    Optional parameter: The page count to retrieve from the total results in the collection. Page indexing starts at 1.
* @param    pageSize    Optional parameter: Number of individual resources listed in the response per page
* @param    from    Optional parameter: Filter SMS message objects from this valid 10-digit phone number (E.164 format).
* @param    to    Optional parameter: Filter SMS message objects to this valid 10-digit phone number (E.164 format).
* @param    dateSent    Optional parameter: Only list SMS messages sent in the specified date range
*/
- (void) createListSMSAsyncWithPage:(NSNumber*) page
                pageSize:(NSNumber*) pageSize
                from:(NSString*) from
                to:(NSString*) to
                dateSent:(NSString*) dateSent
                completionBlock:(CompletedPostListSMS) onCompleted;

/**
* Completion block definition for asynchronous call to List Inbound SMS */
typedef void (^CompletedPostListInboundSMS)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of Inbound SMS message objects.
* @param    page    Optional parameter: The page count to retrieve from the total results in the collection. Page indexing starts at 1.
* @param    pageSize    Optional parameter: The count of objects to return per page.
* @param    from    Optional parameter: Filter SMS message objects from this valid 10-digit phone number (E.164 format).
* @param    to    Optional parameter: Filter SMS message objects to this valid 10-digit phone number (E.164 format).
* @param    dateSent    Optional parameter: Filter sms message objects by this date.
*/
- (void) createListInboundSMSAsyncWithPage:(NSNumber*) page
                pageSize:(NSNumber*) pageSize
                from:(NSString*) from
                to:(NSString*) to
                dateSent:(NSString*) dateSent
                completionBlock:(CompletedPostListInboundSMS) onCompleted;

@end