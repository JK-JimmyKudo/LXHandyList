//
//  UITableView+LXHandyList.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import <UIKit/UIKit.h>
#import "LXHTableCellConfig.h"
#import "LXHTableHeaderFooterConfig.h"
#import "LXHandyTableIMP.h"

NS_ASSUME_NONNULL_BEGIN
/**
 ybht_tableIMP 属性是核心代理实现类，其它属性都是便捷配置 ybht_tableIMP 的语法糖
 */
@interface UITableView (LXHandyList)

/** 一个 section，cell 配置数组 */
@property (nonatomic, strong, readonly) NSMutableArray<id<LXHTableCellConfig>> *ybht_rowArray;
/** 一个 section，header 配置 */
@property (nonatomic, strong, nullable) id<LXHTableHeaderFooterConfig> ybht_header;
/** 一个 section，footer 配置 */
@property (nonatomic, strong, nullable) id<LXHTableHeaderFooterConfig> ybht_footer;

/** 多个 section */
@property (nonatomic, strong, readonly) NSMutableArray<LXHTableSection *> *ybht_sectionArray;

/** 公共信息对象，将会下发到 Cell/Header/Footer */
@property (nonatomic, strong) LXHTCommonInfo *ybht_commonInfo;

/** 代理实现者，将数组内容转换为列表代理方法的核心类
 （需要实现额外的 UITableView 代理方法，可以自定义继承 YBHandyTableIMP 的类并赋值该属性）*/
@property (nonatomic, strong) __kindof LXHandyTableIMP *ybht_tableIMP;

@end

NS_ASSUME_NONNULL_END
