//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <XCTest/XCTest.h>
#import "SharedShortCodeController.h"
#import "TestHelper.h"
#import "TestBaseController.h"

@interface  TestSharedShortCodeController : TestBaseController
//Controller instance for all tests
@property SharedShortCodeController* controller;
@end 


@implementation  TestSharedShortCodeController : TestBaseController

//Setup test class
//This method is called before the invocation of each test method in the test class
- (void)setUp {
    [super setUp];
    self.controller = [[SharedShortCodeController alloc]init];
}

//Teardown test class
//This method is called after the invocation of each test method in the test class
- (void)tearDown {
    [super tearDown];
}	


// List All Inbound ShortCode    
-(void) testTestListInboundSMS {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* datecreated = nil;
    NSNumber* page = nil;
    NSNumber* pagesize = nil;
    NSString* from = nil;
    NSString* shortcode = nil;

    // Set callback and perform API call
    [self.controller createListInboundSMSAsyncWithDatecreated: datecreated page : page pagesize : pagesize from : from shortcode : shortcode  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// List Shortcode Templates by Type    
-(void) testTestListTemplates {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* type = nil;
    NSNumber* page = nil;
    NSNumber* pagesize = nil;
    NSString* shortcode = nil;

    // Set callback and perform API call
    [self.controller createListTemplatesAsyncWithType: type page : page pagesize : pagesize shortcode : shortcode  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of keywords associated with your Ytel account.    
-(void) testTestListKeywords {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSNumber* page = nil;
    NSNumber* pagesize = nil;
    NSString* keyword = nil;
    NSNumber* shortcode = nil;

    // Set callback and perform API call
    [self.controller createListKeywordsAsyncWithPage: page pagesize : pagesize keyword : keyword shortcode : shortcode  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of shortcode assignment associated with your Ytel account.    
-(void) testTestListShortcodes {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* shortcode = nil;
    NSNumber* page = nil;
    NSNumber* pagesize = nil;

    // Set callback and perform API call
    [self.controller createListShortcodesAsyncWithShortcode: shortcode page : page pagesize : pagesize  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}



@end