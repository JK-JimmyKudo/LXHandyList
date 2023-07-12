//  LXHTableHeaderFooterProtocol.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import <UIKit/UIKit.h>
#import "LXHTCommonInfo.h"

@protocol LXHTableHeaderFooterConfig;
@class LXHTableSection;

NS_ASSUME_NONNULL_BEGIN

@protocol LXHTableHeaderFooterProtocol <NSObject>

@optional

/**
 传递数据给 header/footer (根据配置对象拿到数据更新UI)
 
 @param config 配置对象
 @param section section
 @param commonInfo 公共信息
 */
- (void)ybht_setHeaderFooterConfig:(id<LXHTableHeaderFooterConfig>)config section:(NSInteger)section commonInfo:(LXHTCommonInfo *)commonInfo;
- (void)ybht_setHeaderFooterConfig:(id<LXHTableHeaderFooterConfig>)config;

/**
 获取 header/footer 的高度
 
 @param config 配置对象
 @param reuseIdentifier 复用标识
 @param section section
 @param commonInfo 公共信息
 @return 高度
 */
+ (CGFloat)ybht_heightForHeaderFooterWithConfig:(id<LXHTableHeaderFooterConfig>)config reuseIdentifier:(NSString *)reuseIdentifier section:(NSInteger)section commonInfo:(LXHTCommonInfo *)commonInfo;
+ (CGFloat)ybht_heightForHeaderFooterWithConfig:(id<LXHTableHeaderFooterConfig>)config reuseIdentifier:(NSString *)reuseIdentifier section:(NSInteger)section;

/**
 刷新 tableView
 */
@property (nonatomic, copy) void(^ybht_reloadTableView)(void);

@end

NS_ASSUME_NONNULL_END
