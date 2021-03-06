//
//  SavePanelLanguageChooserViewController.h
//  JSONModeler
//
//  Created by Sean Hickey on 12/29/11.
//  Copyright (c) 2011 Nerdery Interactive Labs. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SavePanelLanguageChooserViewController : NSViewController

@property (nonatomic) NSInteger languageDropDownIndex;
@property (strong) NSString *packageName;
@property (strong) NSString *baseClassName;
@property (strong) NSString *classPrefix;
@property (nonatomic) BOOL buildForARC;

@property (weak) IBOutlet NSPopUpButton *languageDropDown;
@property (weak) IBOutlet NSTextField *outputLanguageLabel;
@property (weak) IBOutlet NSTextField *packageNameLabel;
@property (weak) IBOutlet NSTextField *packageNameField;
@property (weak) IBOutlet NSTextField *baseClassLabel;
@property (weak) IBOutlet NSTextField *baseClassField;
@property (weak) IBOutlet NSButton *buildForArcButton;
@property (weak) IBOutlet NSView *javaPanel;
@property (weak) IBOutlet NSView *objectiveCPanel;
@property (weak) IBOutlet NSTextField *classPrefixField;
@property (weak) IBOutlet NSTextField *classPrefixLabel;


- (IBAction)languagePopUpChanged:(id)sender;

- (OutputLanguage)chosenLanguage;
@end
