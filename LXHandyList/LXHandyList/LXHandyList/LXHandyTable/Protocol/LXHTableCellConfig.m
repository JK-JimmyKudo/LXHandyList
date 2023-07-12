//
//  LXHTableCellConfig.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//


#import "LXHTableCellConfig.h"

@implementation LXHTableCellConfig

#pragma mark - life cycle

- (instancetype)init {
    self = [super init];
    if (self) {
        _defaultHeight = -1;
    }
    return self;
}

#pragma mark - <LXHTableCellConfig>

- (Class<LXHTableCellProtocol>)ybht_cellClass {
    return self.cellClass;
}

- (id)ybht_model {
    return self.model;
}

- (CGFloat)ybht_defaultHeight {
    return self.defaultHeight;
}

- (NSString *)ybht_cellReuseIdentifier {
    return self.cellReuseIdentifier;
}

@end
