//
//  Loader.h
//  TP2
//
//  Created by Valentin Bancarel on 28/05/2015.
//  Copyright (c) 2015 bancarelvalentin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface Loader : NSObject

-(void)downloadFile:(NSURL*)url for:(id)delegate;
-(void)instanciateVehiclesFromJSON:(NSURL*)url andGiveThemTo:(id)delegate;

@end

@protocol vehicleHandler
- (void)receiveVehicles:(NSArray *)vehicles;
@end
