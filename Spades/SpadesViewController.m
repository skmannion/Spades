//
//  SpadesViewController.m
//  Spades
//
//  Created by Russell de Moose on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "SpadesViewController.h"

@implementation SpadesViewController


-(IBAction) setBid: (id)sender
{
    
}

-(void) trickSender:(id)sender
{
    viewScore = [playerScore getScore:textfield.value];
}


- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
 
 playerScore = [[BidScore alloc] init];
 
 [playerScore createScore];
    
    [super viewDidLoad];
    
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
