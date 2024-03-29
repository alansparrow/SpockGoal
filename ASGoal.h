//
//  ASGoal.h
//  SpockGoal
//
//  Created by Alan Sparrow on 1/7/14.
//  Copyright (c) 2014 Alan Sparrow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ASGoal : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * createdDate;
@property (nonatomic) int32_t assumedStartTime;
@property (nonatomic) int32_t assumedFinishTime;
@property (nonatomic) BOOL remindMe;
@property (nonatomic) BOOL monday;
@property (nonatomic) BOOL tuesday;
@property (nonatomic) BOOL wednesday;
@property (nonatomic) BOOL thursday;
@property (nonatomic) BOOL friday;
@property (nonatomic) BOOL saturday;
@property (nonatomic) BOOL sunday;
@property (nonatomic) double orderingValue;
@property (nonatomic, retain) NSSet *records;
@end

@interface ASGoal (CoreDataGeneratedAccessors)

- (void)addRecordsObject:(NSManagedObject *)value;
- (void)removeRecordsObject:(NSManagedObject *)value;
- (void)addRecords:(NSSet *)values;
- (void)removeRecords:(NSSet *)values;

@end
