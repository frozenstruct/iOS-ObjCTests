//
//  Student.h
//  ProtocolsTest
//
//  Created by Dmitry Aksyonov on 20.02.2020.
//  Copyright © 2020 Dmitry Aksyonov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Patient.h"

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject <Patient>

@property (strong, nonatomic) NSString* universityName;
@property (strong, nonatomic) NSString* name;

- (void) study;

@end

NS_ASSUME_NONNULL_END
