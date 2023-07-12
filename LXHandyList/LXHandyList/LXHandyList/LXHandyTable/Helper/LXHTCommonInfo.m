//
//  LXHTCommonInfo.m
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import "LXHTCommonInfo.h"

@implementation LXHTCommonInfo
- (instancetype)init {
    self = [super init];
    if (self) {
        CGSize size = UIScreen.mainScreen.bounds.size;
        _maxWidth = size.width;
        _maxHeight = size.height;
    }
    return self;
}

@end
