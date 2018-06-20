//
//  CreateConferencesPlayAudioInput.m
//  YtelAPI
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io )
//
#import "CreateConferencesPlayAudioInput.h"

@implementation CreateConferencesPlayAudioInput

/**
* The unique identifier for a conference object.
*/
@synthesize conferenceSid;

/**
* The unique identifier for a participant object.
*/
@synthesize participantSid;

/**
* The URL for the audio file that is to be played during the conference. Multiple audio files can be chained by using a semicolon.
*/
@synthesize audioUrl;

 /**
 * For serialization of enum AudioUrlEnum type property as NSString*
 */
-(id) JSONObjectForAudioUrl
{
     
    return [AudioUrlEnumHelper stringFromAudioUrlEnum:(enum AudioUrlEnum) audioUrl withDefault: nil];

}

/**
 * For deserialization of enum AudioUrlEnum type property from NSString*
 */
 
-(void)setAudioUrlWithNSString:(NSString*) strValue
{
    audioUrl = [AudioUrlEnumHelper audioUrlEnumFromString:(NSString*) strValue];
}


@end