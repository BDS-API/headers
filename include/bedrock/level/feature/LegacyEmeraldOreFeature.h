#pragma once

#include "Feature.h"


class LegacyEmeraldOreFeature : public Feature {

public:
    virtual ~LegacyEmeraldOreFeature(); // _ZN23LegacyEmeraldOreFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK23LegacyEmeraldOreFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacyEmeraldOreFeature(); // _ZN23LegacyEmeraldOreFeatureC2Ev
};
