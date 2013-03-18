//
//  PictureManager.h
//  PhotoShells.singleView
//
//  Created by Nishrin Khambati on 13-03-06.
//  Copyright (c) 2013 Vrinda Vaish. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <AssetsLibrary/AssetsLibrary.h> 
#import "OCR.h"
#import "CategorizationSettings.h"

@interface PictureManager : NSObject
{
    ALAssetsLibrary *library;
    NSArray *imgA;
    NSMutableArray *mtbA;
    NSFileManager *manager;
    NSMutableArray *urlA;
    NSString *lastUpdateDate;
    NSTimer *timer;
}

+(PictureManager *)sharedPicManager;
-(void)fetchPictures;
-(void)CopyPictureToAlbum:(NSURL *)url Location: (NSString *)album;
-(NSArray*)getUIImage;
-(NSMutableArray*)getURLs;
-(void)setTimer;
-(void)invalidateTimer;

@end
