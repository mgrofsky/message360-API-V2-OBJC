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

@interface RecordingController : BaseController

/**
* Completion block definition for asynchronous call to Delete Recording */
typedef void (^CompletedPostDeleteRecording)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Remove a recording from your Ytel account.
* @param    recordingsid    Required parameter: The unique identifier for a recording.
*/
- (void) createDeleteRecordingAsyncWithRecordingsid:(NSString*) recordingsid
                completionBlock:(CompletedPostDeleteRecording) onCompleted;

/**
* Completion block definition for asynchronous call to View Recording */
typedef void (^CompletedPostViewRecording)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve the recording of a call by its RecordingSid. This resource will return information regarding the call such as start time, end time, duration, and so forth.
* @param    recordingsid    Required parameter: The unique identifier for the recording.
*/
- (void) createViewRecordingAsyncWithRecordingsid:(NSString*) recordingsid
                completionBlock:(CompletedPostViewRecording) onCompleted;

/**
* Completion block definition for asynchronous call to List Recordings */
typedef void (^CompletedPostListRecordings)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of recording objects.
* @param    page    Optional parameter: The page count to retrieve from the total results in the collection. Page indexing starts at 1.
* @param    pagesize    Optional parameter: The count of objects to return per page.
* @param    datecreated    Optional parameter: Filter results by creation date
* @param    callsid    Optional parameter: The unique identifier for a call.
*/
- (void) createListRecordingsAsyncWithPage:(NSNumber*) page
                pagesize:(NSNumber*) pagesize
                datecreated:(NSString*) datecreated
                callsid:(NSString*) callsid
                completionBlock:(CompletedPostListRecordings) onCompleted;

@end