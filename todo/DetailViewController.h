//
//  DetailViewController.h
//  todo
//
//  Created by MacPro01 on 2013/10/23.
//  Copyright (c) 2013年 eyoneya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
