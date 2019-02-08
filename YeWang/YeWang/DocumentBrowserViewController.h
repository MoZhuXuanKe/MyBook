//
//  DocumentBrowserViewController.h
//  YeWang
//
//  Created by WX on 2019/2/8.
//  Copyright © 2019 WX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DocumentBrowserViewController : UIDocumentBrowserViewController

- (void)presentDocumentAtURL:(NSURL *)documentURL;

@end
