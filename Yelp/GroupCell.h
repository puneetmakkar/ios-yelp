//
//  GroupCell.h
//  Yelp
//
//  Created by Puneet Makkar on 9/18/15.
//  Copyright © 2015 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GroupCell : NSObject

@property (nonatomic, assign) BOOL isExpanded;
@property (nonatomic, strong) NSString *sectionLabel;
@property (nonatomic, strong) NSArray *rowLabels;
@property (nonatomic, assign) NSInteger selectedIndex;
@property (nonatomic, strong) NSString *yelpFilterName;
@property (nonatomic, assign, readonly) NSInteger numRows;
@property (nonatomic, strong) NSArray *filterValues;

- initWithSectionLabel:(NSString*)sectionLabel rowLabels:(NSArray*)rowLabels yelpFilterName:(NSString*)filterName yelpFilterValues:(NSArray*) filterValues;
- (NSString*)labelForRow:(NSInteger) row;
- (BOOL) isRowOn:(NSInteger)row;

@end