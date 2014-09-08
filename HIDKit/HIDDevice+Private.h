//
//  HIDDevice+Private.h
//  HIDKit
//
//  Created by Robert Luis Hoover on 9/8/14.
//  Copyright (c) 2014 ars draconis. All rights reserved.
//

#import "HIDDevice.h"


// Private class extension for HIDDevice
@interface HIDDevice ()

@property IOHIDDeviceRef device;

- (NSString *)getStringProperty:(CFStringRef)key;
- (BOOL)getUInt32Property:(uint32_t *)outValue forKey:(CFStringRef)key;
- (void)setUInt32Property:(CFStringRef)key value:(uint32_t)value;

@end
