//
//  SlotsController.h
//  SlotsTickerDemo
//
//  Created by Mark Glagola on 6/21/12.
//  Copyright (c) 2012 Independent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SlotsController : CALayer

//Array containing all SlotLayers
@property (nonatomic) NSMutableArray *slots;

//the font size for all SlotLayers
@property (nonatomic) CGFloat fontSize;

//the font color for all SlotLayers
@property (nonatomic) CGColorRef color;

//Set this to animate
//MUST BE a positive # and between 0 and (10^self.size - 1)
@property (nonatomic) int value;

//the slot animation speed for all SlotLayers
@property (nonatomic) float speed;

//The amount of SlotLayers initialized (readonly)
@property (nonatomic, readonly) int size;

//Set the max amount of SlotLayers to be initialized (Default is 9)
- (id) initWithSize:(int) size;

//sets the font for all SlotLayers
- (void) setFontWithName:(NSString*) name;

@end
