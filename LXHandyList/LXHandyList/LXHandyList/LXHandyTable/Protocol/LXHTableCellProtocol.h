//
//  LXHTableCellProtocol.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//


#import <UIKit/UIKit.h>
#import "LXHTCommonInfo.h"

@protocol LXHTableCellConfig;
@class LXHTableSection;

NS_ASSUME_NONNULL_BEGIN

@protocol LXHTableCellProtocol <NSObject>

@optional

/**
 传递数据给 cell (根据配置对象拿到数据更新UI)
 
 @param config 配置对象
 @param indexPath indexPath
 @param commonInfo 公共信息
 */
- (void)ybht_setCellConfig:(id<LXHTableCellConfig>)config indexPath:(NSIndexPath *)indexPath commonInfo:(LXHTCommonInfo *)commonInfo;
- (void)ybht_setCellConfig:(id<LXHTableCellConfig>)config;

/**
 获取 cell 的高度
 
 @param config 配置对象
 @param reuseIdentifier 复用标识
 @param indexPath indexPath
 @param commonInfo 公共信息
 @return 高度
 */
+ (CGFloat)ybht_heightForCellWithConfig:(id<LXHTableCellConfig>)config reuseIdentifier:(NSString *)reuseIdentifier indexPath:(NSIndexPath *)indexPath commonInfo:(LXHTCommonInfo *)commonInfo;
+ (CGFloat)ybht_heightForCellWithConfig:(id<LXHTableCellConfig>)config reuseIdentifier:(NSString *)reuseIdentifier indexPath:(NSIndexPath *)indexPath;

/**
 当前 cell 被选中
 
 @param indexPath indexPath
 */
- (void)ybht_didSelectedAtIndexPath:(NSIndexPath *)indexPath;

/** 刷新 UITableView */
@property (nonatomic, copy) void(^ybht_reloadTableView)(void);

@end

NS_ASSUME_NONNULL_END
