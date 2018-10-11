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
#import "TypeEnum.h"
#import "TypeEnumHelper.h"

@interface EmailController : BaseController

/**
* Completion block definition for asynchronous call to Remove Invalid Email */
typedef void (^CompletedPostRemoveInvalidEmail)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove an email from the invalid email list.
* @param    email    Required parameter: A valid email address that is to be remove from the invalid email list.
*/
- (void) createRemoveInvalidEmailAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostRemoveInvalidEmail) onCompleted;

/**
* Completion block definition for asynchronous call to Blocked Emails */
typedef void (^CompletedPostBlockedEmails)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of emails that have been blocked.
* @param    offset    Optional parameter: The starting point of the list of blocked emails that should be returned.
* @param    limit    Optional parameter: The count of results that should be returned.
*/
- (void) createBlockedEmailsAsyncWithOffset:(NSString*) offset
                limit:(NSString*) limit
                completionBlock:(CompletedPostBlockedEmails) onCompleted;

/**
* Completion block definition for asynchronous call to Spam Emails */
typedef void (^CompletedPostSpamEmails)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of emails that are on the spam list.
* @param    offset    Optional parameter: The starting point of the list of spam emails that should be returned.
* @param    limit    Optional parameter: The count of results that should be returned.
*/
- (void) createSpamEmailsAsyncWithOffset:(NSString*) offset
                limit:(NSString*) limit
                completionBlock:(CompletedPostSpamEmails) onCompleted;

/**
* Completion block definition for asynchronous call to Bounced Emails */
typedef void (^CompletedPostBouncedEmails)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of emails that have bounced.
* @param    offset    Optional parameter: The starting point of the list of bounced emails that should be returned.
* @param    limit    Optional parameter: The count of results that should be returned.
*/
- (void) createBouncedEmailsAsyncWithOffset:(NSString*) offset
                limit:(NSString*) limit
                completionBlock:(CompletedPostBouncedEmails) onCompleted;

/**
* Completion block definition for asynchronous call to Remove Bounced Email */
typedef void (^CompletedPostRemoveBouncedEmail)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove an email address from the bounced list.
* @param    email    Required parameter: The email address to be remove from the bounced email list.
*/
- (void) createRemoveBouncedEmailAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostRemoveBouncedEmail) onCompleted;

/**
* Completion block definition for asynchronous call to Invalid Emails */
typedef void (^CompletedPostInvalidEmails)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of invalid email addresses.
* @param    offset    Optional parameter: The starting point of the list of invalid emails that should be returned.
* @param    limit    Optional parameter: The count of results that should be returned.
*/
- (void) createInvalidEmailsAsyncWithOffset:(NSString*) offset
                limit:(NSString*) limit
                completionBlock:(CompletedPostInvalidEmails) onCompleted;

/**
* Completion block definition for asynchronous call to List Unsubscribed Emails */
typedef void (^CompletedPostListUnsubscribedEmails)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of email addresses from the unsubscribe list.
* @param    offset    Optional parameter: The starting point of the list of unsubscribed emails that should be returned.
* @param    limit    Optional parameter: The count of results that should be returned.
*/
- (void) createListUnsubscribedEmailsAsyncWithOffset:(NSString*) offset
                limit:(NSString*) limit
                completionBlock:(CompletedPostListUnsubscribedEmails) onCompleted;

/**
* Completion block definition for asynchronous call to Remove Unsubscribed Email */
typedef void (^CompletedPostRemoveUnsubscribedEmail)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove an email address from the list of unsubscribed emails.
* @param    email    Required parameter: A valid email address that is to be remove from the unsubscribe list.
*/
- (void) createRemoveUnsubscribedEmailAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostRemoveUnsubscribedEmail) onCompleted;

/**
* Completion block definition for asynchronous call to Add Email Unsubscribe */
typedef void (^CompletedPostAddEmailUnsubscribe)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Add an email to the unsubscribe list
* @param    email    Required parameter: A valid email address that is to be added to the unsubscribe list
*/
- (void) addEmailUnsubscribeAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostAddEmailUnsubscribe) onCompleted;

/**
* Completion block definition for asynchronous call to Remove Blocked Address */
typedef void (^CompletedPostRemoveBlockedAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove an email from blocked emails list.
* @param    email    Required parameter: The email address to be remove from the blocked list.
*/
- (void) createRemoveBlockedAddressAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostRemoveBlockedAddress) onCompleted;

/**
* Completion block definition for asynchronous call to Remove Spam Address */
typedef void (^CompletedPostRemoveSpamAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove an email from the spam email list.
* @param    email    Required parameter: A valid email address that is to be remove from the spam list.
*/
- (void) createRemoveSpamAddressAsyncWithEmail:(NSString*) email
                completionBlock:(CompletedPostRemoveSpamAddress) onCompleted;

/**
* Completion block definition for asynchronous call to Send Email */
typedef void (^CompletedPostSendEmail)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Create and submit an email message to one or more email addresses.
* @param    to    Required parameter: A valid address that will receive the email. Multiple addresses can be separated by using commas.
* @param    type    Required parameter: Specifies the type of email to be sent
* @param    subject    Required parameter: The subject of the mail. Must be a valid string.
* @param    message    Required parameter: The email message that is to be sent in the text.
* @param    from    Optional parameter: A valid address that will send the email.
* @param    cc    Optional parameter: Carbon copy. A valid address that will receive the email. Multiple addresses can be separated by using commas.
* @param    bcc    Optional parameter: Blind carbon copy. A valid address that will receive the email. Multiple addresses can be separated by using commas.
* @param    attachment    Optional parameter: A file that is attached to the email. Must be less than 7 MB in size.
*/
- (void) createSendEmailAsyncWithTo:(NSString*) to
                type:(enum TypeEnum) type
                subject:(NSString*) subject
                message:(NSString*) message
                from:(NSString*) from
                cc:(NSString*) cc
                bcc:(NSString*) bcc
                attachment:(NSString*) attachment
                completionBlock:(CompletedPostSendEmail) onCompleted;

@end