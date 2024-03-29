//
//  CartCell.h
//  UpGradeCart
//
//  Created by SDT-1 on 2014. 1. 9..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Product.h"
#import "CartDelegate.h"
#import "Cart.h"

@interface CartCell : UITableViewCell
    @property (weak, nonatomic)id<CartDelegate> delegate;
    @property (copy, nonatomic)NSString *productCode;

@end
