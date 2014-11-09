//
//  KSPAutomaticHeightCalculationTableCellView.h
//  KSPAutomaticHeightCalculationTableCellView
//
//  Created by Konstantin Pavlikhin on 13.10.14.
//  Copyright (c) 2014 Konstantin Pavlikhin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef void (^KSPTableCellViewConfigurationBlock)(NSTableCellView*);

/// This class is responsible for instantiation and height measurement of a "dummy" table cell view.
@interface KSPAutomaticHeightCalculationTableCellView : NSTableCellView

/// Given a content object, width of a presenting table column and a cell configuration block calculates the minimum possible height of a cell.
+ (CGFloat) heightWithRepresentedObject: (id) object width: (CGFloat) width configurationBlock: (KSPTableCellViewConfigurationBlock) blockOrNil;

+ (CGFloat) heightWithRepresentedObject: (id) object width: (CGFloat) width;

@end