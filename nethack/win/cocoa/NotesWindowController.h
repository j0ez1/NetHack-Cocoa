//
//  NotesWindowController.h
//  NetHackCocoa
//
//  Created by Bryce on 2/24/10.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NotesWindowController : NSWindowController <NSWindowDelegate> {
	IBOutlet NSTextView * textView;
}

@end
