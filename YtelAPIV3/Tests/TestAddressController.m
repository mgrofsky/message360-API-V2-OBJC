//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <XCTest/XCTest.h>
#import "AddressController.h"
#import "TestHelper.h"
#import "TestBaseController.h"

@interface  TestAddressController : TestBaseController
//Controller instance for all tests
@property AddressController* controller;
@end 


@implementation  TestAddressController : TestBaseController

//Setup test class
//This method is called before the invocation of each test method in the test class
- (void)setUp {
    [super setUp];
    self.controller = [[AddressController alloc]init];
}

//Teardown test class
//This method is called after the invocation of each test method in the test class
- (void)tearDown {
    [super tearDown];
}	


// List All Address     
-(void) testTestListAddresses {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSNumber* page = nil;
    NSNumber* pagesize = nil;
    NSString* addressid = nil;
    NSString* dateCreated = nil;

    // Set callback and perform API call
    [self.controller createListAddressesAsyncWithPage: page pagesize : pagesize addressid : addressid dateCreated : dateCreated  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}



@end
