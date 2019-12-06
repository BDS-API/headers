#pragma once

class FancyTreeFeature::FoliageCoords {

public:

    void FoliageCoords(BlockPos, int);
    void getBranchBase(void)const;
    void FoliageCoords(FancyTreeFeature::FoliageCoords&&);
    void FoliageCoords(FancyTreeFeature::FoliageCoords const&);
};
