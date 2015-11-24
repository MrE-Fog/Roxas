//
//  NSFileManager+TemporaryFiles.h
//  Roxas
//
//  Created by Riley Testut on 12/21/14.
//  Copyright (c) 2014 Riley Testut. All rights reserved.
//

@import Foundation;

@interface NSFileManager (TemporaryFiles)

+ (NSURL *)uniqueTemporaryURL;

// Automatically removes item at temporaryURL upon returning from block. Synchronous.
- (void)prepareTemporaryURL:(void(^)(NSURL *temporaryURL))fileHandlingBlock;

@end