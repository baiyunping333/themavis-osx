//
//  TMGradientClassification.h
//  ThemaMap
//
//  Created by Christian Kaiser on 12.03.08.
//  Copyright 2008 361degr�es. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "TMClassification.h"
#import "TMColorTable.h"


@interface TMGradientClassification : TMClassification <NSCoding>
{
	NSMutableArray * _values;
	NSMutableArray * _labels;
	TMColorTable * _colorTable;
}



-(NSMutableArray*)values;
-(void)setValues:(NSMutableArray*)values;
-(NSUInteger)countOfValues;
-(NSNumber*)objectInValuesAtIndex:(NSUInteger)index;
-(void)addObjectToValues:(NSNumber*)value;
-(void)insertObject:(NSNumber*)value inValuesAtIndex:(NSUInteger)index;
-(void)removeObjectFromValuesAtIndex:(NSUInteger)index;

-(NSMutableArray*)labels;
-(void)setLabels:(NSMutableArray*)labels;
-(NSUInteger)countOfLabels;
-(NSString*)objectInLabelsAtIndex:(NSUInteger)index;
-(void)addObjectToLabels:(NSString*)label;
-(void)insertObject:(NSString*)label inLabelsAtIndex:(NSUInteger)index;
-(void)removeObjectFromLabelsAtIndex:(NSUInteger)index;

-(TMColorTable*)colorTable;
-(void)setColorTable:(TMColorTable*)colorTable;



+(NSColor*)gradientColorForValue:(double)value
				withLowerColor:(NSColor*)lowerColor
				upperColor:(NSColor*)upperColor
				lowerValue:(double)lowerClassValue
				upperValue:(double)upperClassValue;

@end
