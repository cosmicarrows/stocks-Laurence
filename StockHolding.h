//
//  StockHolding.h
//  stocksLaurence
//
//  Created by Laurence Wingo on 12/14/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StockHolding : NSObject
{
    float purchaseSharePrice;
    float currentSharePrice;
    int numberOfShares;
}
-(void)setcostInDollars:(float)c;
-(void)setvalueInDollars:(float)v;

@end
