//
//  CreateCallsSenddigitsInput.m
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#import "CreateCallsSenddigitsInput.h"

@implementation CreateCallsSenddigitsInput

/**
* The unique identifier of each call resource
*/
@synthesize callSid;

/**
* DTMF digits to play to the call. 0-9, #, *, W, or w
*/
@synthesize playDtmf;

/**
* The leg of the call DTMF digits should be sent to
*/
@synthesize playDtmfDirection;

 /**
 * For serialization of enum PlayDtmfDirectionEnum type property as NSString*
 */
-(id) JSONObjectForPlayDtmfDirection
{
     
    return [PlayDtmfDirectionEnumHelper stringFromPlayDtmfDirectionEnum:(enum PlayDtmfDirectionEnum) playDtmfDirection withDefault: nil];

}

/**
 * For deserialization of enum PlayDtmfDirectionEnum type property from NSString*
 */
 
-(void)setPlayDtmfDirectionWithNSString:(NSString*) strValue
{
    playDtmfDirection = [PlayDtmfDirectionEnumHelper playDtmfDirectionEnumFromString:(NSString*) strValue];
}


@end