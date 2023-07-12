//
//  UITableView+LXHandyList.m
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import "UITableView+LXHandyList.h"
#import <objc/runtime.h>
@implementation UITableView (LXHandyList)

#pragma mark - syntactic sugar

- (NSMutableArray<id<LXHTableCellConfig>> *)ybht_rowArray {
    return self.ybht_firstSection.rowArray;
}

- (void)setYbht_header:(id<LXHTableHeaderFooterConfig>)ybht_header {
    self.ybht_firstSection.header = ybht_header;
}
- (id<LXHTableHeaderFooterConfig>)ybht_header {
    return self.ybht_firstSection.header;
}

- (void)setYbht_footer:(id<LXHTableHeaderFooterConfig>)ybht_footer {
    self.ybht_firstSection.footer = ybht_footer;
}
- (id<LXHTableHeaderFooterConfig>)ybht_footer {
    return self.ybht_firstSection.footer;
}

- (LXHTableSection *)ybht_firstSection {
    if (self.ybht_sectionArray.count > 0) {
        return self.ybht_sectionArray[0];
    }
    LXHTableSection *section = [LXHTableSection new];
    [self.ybht_sectionArray addObject:section];
    return section;
}

- (void)setYbht_commonInfo:(LXHTCommonInfo *)ybht_commonInfo {
    self.ybht_tableIMP.commonInfo = ybht_commonInfo;
}
- (LXHTCommonInfo *)ybht_commonInfo {
    return self.ybht_tableIMP.commonInfo;
}

#pragma mark - getters & setters

static const void *YBHTSectionArrayKey = &YBHTSectionArrayKey;
- (void)setYbht_sectionArray:(NSMutableArray<LXHTableSection *> * _Nonnull)ybht_sectionArray {
    objc_setAssociatedObject(self, YBHTSectionArrayKey, ybht_sectionArray, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSMutableArray<LXHTableSection *> *)ybht_sectionArray {
    NSMutableArray *array = objc_getAssociatedObject(self, YBHTSectionArrayKey);
    if (!array) {
        array = [NSMutableArray array];
        self.ybht_sectionArray = array;
        
        [self ybht_tableIMP]; //Just call.
    }
    return array;
}

static const void *YBHTableIMPKey = &YBHTableIMPKey;
- (void)setYbht_tableIMP:(LXHandyTableIMP *)ybhl_tableIMP {
    ybhl_tableIMP.sectionArray = self.ybht_sectionArray;
    self.delegate = ybhl_tableIMP;
    self.dataSource = ybhl_tableIMP;
    objc_setAssociatedObject(self, YBHTableIMPKey, ybhl_tableIMP, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (LXHandyTableIMP *)ybht_tableIMP {
    LXHandyTableIMP *imp = objc_getAssociatedObject(self, YBHTableIMPKey);
    if (!imp) {
        imp = [LXHandyTableIMP new];
        self.ybht_tableIMP = imp;
    }
    return imp;
}

@end
