//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>

#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>

@class AKAuthorizationScopeChoices, NSString;

@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_applicationName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (id)tableView:(id)arg1 anonymousCellForRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 emailCellForRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

