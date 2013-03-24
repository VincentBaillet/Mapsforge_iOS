//
//  OSPDataSource.h
//  
//
//  Created by Thomas Davie on 25/02/2012.
//  Copyright (c) 2012 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSPCoordinateRect.h"

#import "OSPAPIObject.h"

@class OSPDataSource;

@protocol OSPDataProvider <NSObject>

- (NSSet *)objectsInBounds:(OSPCoordinateRect)bounds;
- (NSSet *)allObjects;

@end

@protocol OSPDataSourceDelegate <NSObject>

- (void)dataSource:(OSPDataSource *)mapServer didLoadObjectsInArea:(OSPCoordinateRect)area;
- (BOOL)dataSource:(OSPDataSource *)mapServer shouldLoadObjectsInArea:(OSPCoordinateRect)area;

@end

@interface OSPDataSource : NSObject <OSPDataProvider>

@property (readwrite, weak) id<OSPDataSourceDelegate> delegate;

- (void)loadObjectsInBounds:(OSPCoordinateRect)bounds withOutset:(double)outsetSize;
-(void) loadObjectsFromFile:(NSString*)resource;
-(void) loadObjectsFromData:(NSData*)data;
-(void) loadObjectsForTileX:(int)x Y:(int)y zoom:(int)zoom;
-(void) resetObjects;

@end
