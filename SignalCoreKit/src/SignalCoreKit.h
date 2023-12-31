//
//  Copyright (c) 2021 Open Whisper Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SignalCoreKit.
FOUNDATION_EXPORT double SignalCoreKitVersionNumber;

//! Project version string for SignalCoreKit.
FOUNDATION_EXPORT const unsigned char SignalCoreKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SignalCoreKit/PublicHeader.h>
#import <SignalCoreKit/Cryptography.h>
#import <SignalCoreKit/UnfairLock.h>

#define OWSLocalizedString(key, comment) \
    [[NSBundle mainBundle].appBundle localizedStringForKey:(key) value:@"" table:nil]
