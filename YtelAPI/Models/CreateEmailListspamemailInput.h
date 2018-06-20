//
//  CreateEmailListspamemailInput.h
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATEEMAILLISTSPAMEMAILINPUT
#define APIMATIC_CREATEEMAILLISTSPAMEMAILINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol CreateEmailListspamemailInput
@end

@interface CreateEmailListspamemailInput : NSObject

/**
* The starting point of the list of spam emails that should be returned.
*/
@property NSString* offset;

/**
* The count of results that should be returned.
*/
@property NSString* limit;

@end
#endif