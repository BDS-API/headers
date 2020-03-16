#pragma once

#include "Feature.h"


class DoublePlantFeature : public Feature {

public:
    virtual ~DoublePlantFeature(); // _ZN18DoublePlantFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK18DoublePlantFeature5placeER11BlockSourceRK8BlockPosR6Random
    DoublePlantFeature(); // _ZN18DoublePlantFeatureC2Ev
//    void place(BlockSource &, BlockPos const&, Random &, long)const; //TODO: incomplete function definition // _ZNK18DoublePlantFeature5placeER11BlockSourceRK8BlockPosR6Random15DoublePlantType
};
