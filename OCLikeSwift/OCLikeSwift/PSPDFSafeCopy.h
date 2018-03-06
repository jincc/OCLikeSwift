//
//  PSPDFSafeCopy.h
//  OCLikeSwift
//
//  Created by Jincc on 2018/3/5.
//  Copyright © 2018年 MeiTuan. All rights reserved.
//

#ifndef PSPDFSafeCopy_h
#define PSPDFSafeCopy_h
#import <Foundation/Foundation.h>
@interface NSArray  (PSPDFSafeCopy)

/// Same as `copy` but retains the generic type.
- (NSArray  *)copy;

/// Same as `mutableCopy` but retains the generic type.
- (NSMutableArray  *)mutableCopy;

@end


@interface NSDictionary  (PSPDFSafeCopy)

/// Same as `copy` but retains the generic type.
- (NSDictionary  *)copy;

/// Same as `mutableCopy` but retains the generic type.
- (NSMutableDictionary *)mutableCopy;

@end

#endif /* PSPDFSafeCopy_h */
