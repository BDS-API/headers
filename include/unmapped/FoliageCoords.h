#pragma once

#include "../bedrock/util/BlockPos"


using namespace FancyTreeFeature;

class FoliageCoords {

public:

    FoliageCoords(BlockPos, int);
    void getBranchBase()const;
    FoliageCoords(FancyTreeFeature::FoliageCoords&&);
    FoliageCoords(FancyTreeFeature::FoliageCoords const&);
};
