#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/FoliageCoords"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class FancyTreeFeature : TreeFeature {

public:
    FancyTreeFeature::~FancyTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    FancyTreeFeature(Actor *, bool);
    void _checkLocation(BlockSource &, BlockPos const&, int &)const;
    void _getTreeShape(int, int)const;
    void _checkLine(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _makeFoliage(BlockSource &, BlockPos const&, std::vector<FancyTreeFeature::FoliageCoords, std::allocator<FancyTreeFeature::FoliageCoords>> const&, int &)const;
    void _makeTrunk(BlockSource &, BlockPos const&, int)const;
    void _makeBranches(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords, std::allocator<FancyTreeFeature::FoliageCoords>> const&, BlockPos const&, int)const;
    void _getSteps(BlockPos const&)const;
    void _foliageCluster(BlockSource &, BlockPos const&, FancyTreeFeature::FoliageCoords const&, int &)const;
    void _crossection(BlockSource &, BlockPos const&, BlockPos const&, float, Block const&, int &)const;
    void _getFoliageShape(int)const;
    void _limb(BlockSource &, BlockPos const&, BlockPos const&, Block const&)const;
    void _trimBranches(int, int)const;
};
