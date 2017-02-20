//
//  RWGameData.h
//  Pickle-2
//
//  Created by Billy Thomas on 2/19/17.
//  Copyright © 2017 BIZNIT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RWGameData : NSObject

@property (assign, nonatomic) long score;
@property (assign, nonatomic) long highScore;

@property (assign, nonatomic) int characterIndex;
//@property (assign,nonatomic) NSArray* characterArray;// = @[@"BlankCharacter-1", @"PickleCharacter-1"];



//@property (assign, nonatomic) long totalDistance;

+(instancetype)sharedGameData;
-(void)reset;

@end
