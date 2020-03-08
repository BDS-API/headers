#pragma once



using namespace FancyTreeFeature;

class FoliageCoords {

public:

    FoliageCoords(BlockPos, int);
    void getBranchBase(void)const;
    FoliageCoords(FancyTreeFeature::FoliageCoords&&);
    FoliageCoords(FancyTreeFeature::FoliageCoords const&);
};
