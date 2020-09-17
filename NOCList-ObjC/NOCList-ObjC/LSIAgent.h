//
//  LSIAgent.h
//  NOCList-ObjC
//
//  Created by Juan M Mariscal on 9/16/20.
//  Copyright © 2020 Juan M Mariscal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIAgent : NSObject

@property (nonatomic) NSString *coverName;
@property (nonatomic) NSString *realName;
@property (nonatomic) int accessLevel;
@property (nonatomic) BOOL compromised = NO;

- (void)instanceMethod;

@end

NS_ASSUME_NONNULL_END
