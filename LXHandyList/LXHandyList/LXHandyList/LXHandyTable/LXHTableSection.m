//
//  LXHTableSection.m
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import "LXHTableSection.h"

@interface LXHTableSection ()

@property (nonatomic, strong) NSMutableArray<id<LXHTableCellConfig>> *rowArray;

@end


@implementation LXHTableSection

- (NSMutableArray<id<LXHTableCellConfig>> *)rowArray {
    if (!_rowArray) {
        _rowArray = [NSMutableArray array];
    }
    return _rowArray;
}

@end
