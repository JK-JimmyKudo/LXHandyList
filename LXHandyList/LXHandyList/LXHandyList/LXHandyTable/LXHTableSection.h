//
//  LXHTableSection.h
//  LXHandyList
//
//  Created by li on 2023/7/12.
//

#import <Foundation/Foundation.h>
#import "LXHTableHeaderFooterConfig.h"
#import "LXHTableCellConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface LXHTableSection : NSObject

/** UITableView 的 header 配置 */
@property (nonatomic, strong, nullable) id<LXHTableHeaderFooterConfig> header;

/** UITableView 的 footer 配置 */
@property (nonatomic, strong, nullable) id<LXHTableHeaderFooterConfig> footer;

/** UITableView 的 cell 配置数组 */
@property (nonatomic, strong, readonly) NSMutableArray<id<LXHTableCellConfig>> *rowArray;

@end

NS_ASSUME_NONNULL_END
