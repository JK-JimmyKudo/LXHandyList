//
//  LXHTableCellConfig.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//


#import <Foundation/Foundation.h>
#import "LXHTableCellProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 UITableView cell 配置协议
 */
@protocol LXHTableCellConfig <NSObject>

@required

/** cell 的类类型 */
- (Class<LXHTableCellProtocol>)ybht_cellClass;

@optional

/** cell 对应的数据模型 */
- (id)ybht_model;

/** cell 的默认高度 (优先级低于 YBHTableCellProtocol 代理方法返回的高度) */
- (CGFloat)ybht_defaultHeight;

/** cell 的复用标识 */
- (NSString *)ybht_cellReuseIdentifier;

@end


/**
 配置默认实现类，用于快速构建，若想拓展属性请自行创建类实现 YBHTableCellConfig 协议
 */
@interface LXHTableCellConfig : NSObject <LXHTableCellConfig>

/** cell 的类类型 */
@property (nonatomic, strong) Class<LXHTableCellProtocol> cellClass;

/** cell 对应的数据模型 */
@property (nonatomic, strong) id model;

/** cell 的默认高度 (优先级低于 YBHTableCellProtocol 代理方法返回的高度) */
@property (nonatomic, assign) CGFloat defaultHeight;

/** cell 的复用标识 */
@property (nonatomic, copy, nullable) NSString *cellReuseIdentifier;

@end

NS_ASSUME_NONNULL_END
