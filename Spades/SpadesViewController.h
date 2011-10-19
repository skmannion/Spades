//
//  SpadesViewController.h
//  Spades
//
//  Created by Russell de Moose on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BidScore.h"

@interface SpadesViewController : UIViewController
{
    BidScore *playerScore;
    int viewScore;
    
}

-(IBAction) setBid: (id)sender; 
-(void) trickSender:(id)sender; 


@end
