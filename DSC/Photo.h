//
//  Photo.h
//  DSC
//
//  Created by Larry on 7/31/12.
//  Copyright (c) 2012 Larry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photo : NSManagedObject

@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSData * data;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * state;

@end
