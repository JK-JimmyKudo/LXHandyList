//
//  LXHTableHeaderFooterConfig.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import "LXHTableHeaderFooterConfig.h"

@implementation LXHTableHeaderFooterConfig

#pragma mark - life cycle

- (instancetype)init {
    self = [super init];
    if (self) {
        _defaultHeight = -1;
    }
    return self;
}

#pragma mark - <LXHTableHeaderFooterConfig>

- (Class<LXHTableHeaderFooterProtocol>)ybht_headerFooterClass {
    return self.headerFooterClass;
}

- (id)ybht_model {
    return self.model;
}

- (CGFloat)ybht_defaultHeight {
    return self.defaultHeight;
}

- (NSString *)ybht_headerFooterReuseIdentifier {
    return self.headerFooterReuseIdentifier;
}

@end
