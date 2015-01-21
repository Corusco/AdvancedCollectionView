/*
 Copyright (C) 2014 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 
  The header view shown in the cat detail screen. This view shows the name of the cat and its conservation status.
  
 */

@import AdvancedCollectionView;

@class AAPLCat;

@interface AAPLCatDetailHeader : AAPLPinnableHeaderView

- (void)configureWithCat:(AAPLCat *)cat;

@end
