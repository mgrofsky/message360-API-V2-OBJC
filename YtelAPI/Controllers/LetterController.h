//
//  LetterController.h
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
#import "CreateLetterListsletterInput.h"
#import "CreateLetterCreateInput.h"

@interface LetterController : BaseController

/**
* Completion block definition for asynchronous call to LetterDelete */
typedef void (^CompletedPostLetterDelete)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove a letter object by its LetterId.
* @param    lettersid    Required parameter: The unique identifier for a letter object.
*/
- (void) createLetterDeleteAsyncWithLettersid:(NSString*) lettersid
                completionBlock:(CompletedPostLetterDelete) onCompleted;

/**
* Completion block definition for asynchronous call to LetterViewletter */
typedef void (^CompletedPostLetterViewletter)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a letter object by its LetterSid.
* @param    lettersid    Required parameter: The unique identifier for a letter object.
*/
- (void) createLetterViewletterAsyncWithLettersid:(NSString*) lettersid
                completionBlock:(CompletedPostLetterViewletter) onCompleted;

/**
* Completion block definition for asynchronous call to LetterListsletter */
typedef void (^CompletedPostLetterListsletter)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of letter objects. The letter objects are sorted by creation date, with the most recently created letters appearing first.
* @param  CreateLetterListsletterInput     Object with all parameters
*/
- (void) createLetterListsletterAsyncWithCreateLetterListsletterInput:(CreateLetterListsletterInput*) input
                completionBlock:(CompletedPostLetterListsletter) onCompleted;

/**
* Completion block definition for asynchronous call to LetterCreate */
typedef void (^CompletedPostLetterCreate)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Create, print, and mail a letter to an address. The letter file must be supplied as a PDF or an HTML string.
* @param  CreateLetterCreateInput     Object with all parameters
*/
- (void) createLetterCreateAsyncWithCreateLetterCreateInput:(CreateLetterCreateInput*) input
                completionBlock:(CompletedPostLetterCreate) onCompleted;

@end