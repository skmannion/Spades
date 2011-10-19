//
//  score.h
//  Spades
//
//  Created by Russell de Moose on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BidScore: NSObject

{
    int scoreArray;
    int score;

}

-(void) createScore;
-(void) setBid;
-(int) getScore:(int)bids forTricks:(int)tricks;

@end
