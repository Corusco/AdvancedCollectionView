//
//  AAPLMacros.h
//  AdvancedCollectionView
//
//  Created by Zachary Waldowski on 6/14/15.
//  Copyright © 2015 Apple. All rights reserved.
//

#pragma once

@import Foundation.NSObjCRuntime;

#ifndef __has_feature
#define __has_feature(x) 0
#endif

#define AAPL_FORCE_DOWNCAST(obj__, class__) ({ \
    NSAssert([obj__ isKindOfClass:[class__ self]], @"" #obj__ " not an instance of " #class__ "."); \
    (class__ *)obj__; \
})

#if __has_feature(objc_generics)

#define AAPLArrayG(...) NSArray<__VA_ARGS__>
#define AAPLMutableArrayG(...) NSMutableArray<__VA_ARGS__>
#define AAPLSetG(...) NSSet<__VA_ARGS__>
#define AAPLMutableSetG(...) NSMutableSet<__VA_ARGS__>
#define AAPLOrderedSetG(...) NSOrderedSet<__VA_ARGS__>
#define AAPLMutableOrderedSetG(...) NSMutableOrderedSet<__VA_ARGS__>
#define AAPLDictionaryG(...) NSDictionary<__VA_ARGS__>
#define AAPLMutableDictionaryG(...) NSMutableDictionary<__VA_ARGS__>
#define AAPLHashTableG(...) NSHashTable<__VA_ARGS__>
#define AAPLMapTableG(...) NSMapTable<__VA_ARGS__>
#define AAPLUseGeneric(...) __VA_ARGS__
#define AAPLGenericOf(TYPE_NAME, ...) TYPE_NAME<__VA_ARGS__>
#define AAPLKindOf(...) __kindof __VA_ARGS__

#else

#define AAPLArrayG(...) NSArray
#define AAPLMutableArrayG(...) NSMutableArray
#define AAPLSetG(...) NSSet
#define AAPLMutableSetG(...) NSMutableSet
#define AAPLOrderedSetG(...) NSOrderedSet
#define AAPLMutableOrderedSetG(...) NSMutableOrderedSet
#define AAPLDictionaryG(...) NSDictionary
#define AAPLHashTableG(...) NSHashTable
#define AAPLMapTableG(...) NSMapTable
#define AAPLUseGeneric(...) id
#define AAPLGenericOf(TYPE_NAME, ...) TYPE_NAME
#define AAPLKindOf(...) id

#endif
