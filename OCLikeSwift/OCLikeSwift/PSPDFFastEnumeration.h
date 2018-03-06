//
//  PSPDFFastEnumeration.h
//  OCLikeSwift
//
//  Created by Jincc on 2018/3/5.
//  Copyright © 2018年 MeiTuan. All rights reserved.
//

#ifndef PSPDFFastEnumeration_h
#define PSPDFFastEnumeration_h
#import <UIKit/UIKit.h>
@protocol PSPDFFastEnumeration <NSFastEnumeration>
- (id)pspdf_enumeratedType;
@end

@interface NSArray <ElementType> (PSPDFFastEnumeration) <PSPDFFastEnumeration>
- (ElementType)pspdf_enumeratedType;
@end

@interface NSSet <ElementType> (PSPDFFastEnumeration) <PSPDFFastEnumeration>
- (ElementType)pspdf_enumeratedType;
@end

@interface NSDictionary <KeyType, ValueType> (PSPDFFastEnumeration) <PSPDFFastEnumeration>
- (KeyType)pspdf_enumeratedType;
@end


#endif /* PSPDFFastEnumeration_h */
