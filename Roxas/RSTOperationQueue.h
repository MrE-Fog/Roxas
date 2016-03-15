//
//  RSTOperationQueue.h
//  Roxas
//
//  Created by Riley Testut on 3/14/16.
//  Copyright © 2016 Riley Testut. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface RSTOperationQueue : NSOperationQueue

- (void)addOperation:(NSOperation *)operation forKey:(id<NSCopying>)key;
- (nullable __kindof NSOperation *)operationForKey:(id<NSCopying>)key;

// Unavailable
- (void)addOperations:(NSArray<NSOperation *> *)ops waitUntilFinished:(BOOL)wait __attribute__((unavailable("waitUntilFinished conflicts with RSTOperation's immediate property.")));

@end

NS_ASSUME_NONNULL_END
