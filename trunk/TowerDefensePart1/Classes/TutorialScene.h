//
//  TutorialLayer.h
//  Cocos2D Build a Tower Defense Game
//
//  Created by iPhoneGameTutorials on 4/4/11.
//  Copyright 2011 iPhoneGameTutorial.com All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

#import "Creep.h"
#import "WayPoint.h"
#import "Wave.h"

// Tutorial Layer
@interface Tutorial : CCLayer
{
    CCTMXTiledMap *_tileMap;
    CCTMXLayer *_background;	
	
	int _currentLevel;
}

@property (nonatomic, retain) CCTMXTiledMap *tileMap;
@property (nonatomic, retain) CCTMXLayer *background;

@property (nonatomic, assign) int currentLevel;

+ (id) scene;
- (void)addWaypoint;

@end
