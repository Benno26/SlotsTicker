//
//  SlotLayer.h
//  SlotsTickerDemo
//
//  Created by Mark Glagola on 6/21/12.
//  Copyright (c) 2012 Independent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface SlotTextLayer : CALayer

extern NSString * const kCAAlignmentCenterRight; 

//the font size for all CATextLayers (0 - 9)
@property (nonatomic) CGFloat fontSize;

//the font color for all CATextLayers (0 - 9)
@property (nonatomic) CGColorRef color;

//the speed at which the slots animate
@property (nonatomic) float speed;

//the parent layer of all CATextLayers (0 - 9) 
@property (nonatomic) CALayer *textLayersContainer;

//Array containing all CATextLayers (0 - 9)
@property (nonatomic) NSMutableArray *textLayers;

//the alignmentMode for all CATextLayers (0 - 9)
@property (nonatomic) NSString* alignmentMode;

//sets the font for all CATextLayers (0 - 9)
- (void) setFontWithName:(NSString*) name;

@end
