//
//  UploadFile.h
//  SnipMe
//
//  Created by Vishwanath on 15/12/14.
//
//
#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


@interface UploadFile : CDVPlugin<NSURLSessionDelegate> {
    
    NSMutableData*              _receivedData;
    NSURLConnection*            _conn;
    NSURL*                      _videoUrl;
    UIBackgroundTaskIdentifier backgroundTaskID;
    NSOperationQueue* queue;
    NSString* callbackId;
    CDVInvokedUrlCommand* commandInstance;
    int responseCode;
    NSString* source;
    NSString* target;
    NSString* filePath;
    NSString* server;
    NSString* fileKey;
    NSString* fileName;
    NSString* mimeType;
    NSString* httpMethod;
}


- (void)uploadFile:(CDVInvokedUrlCommand*)command;

- (void) messageAlert:(NSString*)msg title:(NSString*)title delegate:(id)delegate;

- (NSMutableData*)getVideoData:(NSString*)userName password:(NSString*)passowrd caption:(NSString*)caption
                     videoData:(NSData*)data comment:(int)comment withFileKey:(NSString *)fileKey andFileName:(NSString *)fileName;

@end
