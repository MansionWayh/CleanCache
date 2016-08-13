//
//  NSData+SDDataCache.h
//  清除缓存
//
//  Created by strj on 16/2/23.
//  Copyright © 2015年 strj. All rights reserved.

//

#import <Foundation/Foundation.h>


@interface NSData (SDDataCache)

- (void)saveDataCacheWithIdentifier:(NSString *)identifier;

+ (NSData *)getDataCacheWithIdentifier:(NSString *)identifier;

+ (void)clearCache;

@end
