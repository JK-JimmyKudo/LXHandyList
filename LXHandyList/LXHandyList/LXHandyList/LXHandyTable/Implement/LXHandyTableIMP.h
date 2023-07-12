//
//  LXHandyTableIMP.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import <Foundation/Foundation.h>
#import "LXHTCommonInfo.h"
#import "LXHTableSection.h"
#import "LXHTableHeaderFooterConfig.h"


NS_ASSUME_NONNULL_BEGIN

/**
 代理实现类，可以直接抽出来作为 UITableView 的 delegate 和 dataSource，若想实现更多的代理方法，继承于该类在子类中拓展就行了。
 */
@interface LXHandyTableIMP : NSObject <UITableViewDataSource, UITableViewDelegate>

/** 数据源 */
@property (nonatomic, strong) NSMutableArray<LXHTableSection *> *sectionArray;

/** 公共信息对象，将会下发到 Cell/Header/Footer */
@property (nonatomic, strong) LXHTCommonInfo *commonInfo;

@end

NS_ASSUME_NONNULL_END
