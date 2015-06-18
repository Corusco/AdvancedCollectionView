/*
 Copyright (C) 2015 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 Subclasses of AAPLLayoutMetrics with specialisations for data sources.
 */

#import "AAPLDataSourceMetrics.h"
#import "AAPLMacros.h"

@interface AAPLDataSourceSectionMetrics ()
@property (nonatomic, copy) AAPLArrayG(AAPLSupplementaryItem *) *headers;
@property (nonatomic, copy) AAPLArrayG(AAPLSupplementaryItem *) *footers;

// Only used while creating a snapshot. Only actually used for comparisons sake, so we don't care what it is.
@property (nonatomic, strong) id placeholder;
@end
