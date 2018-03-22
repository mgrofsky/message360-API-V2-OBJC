//
//  ListAddressInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "ListAddressInput.h"

@implementation ListAddressInput

/**
* Response Type either json or xml
*/
@synthesize responseType;

/**
* The page count to retrieve from the total results in the collection. Page indexing starts at 1.
*/
@synthesize page;

/**
* How many results to return, default is 10, max is 100, must be an integer
*/
@synthesize pagesize;

/**
* addresses Sid
*/
@synthesize addressid;

/**
* date created address.
*/
@synthesize dateCreated;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
        self.page = 1;
        self.pagesize = 10;
    }
    return self;
}

@end