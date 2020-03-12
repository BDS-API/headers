#pragma once

#include "TreeFeature.h"
#include "../../util/BlockPos.h"
#include <vector>


class FancyTreeFeature : TreeFeature {

public:
    class FoliageCoords;

    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~FancyTreeFeature();
    void _checkLocation(BlockSource &, BlockPos const&, int &)const;
    void _makeTrunk(BlockSource &, BlockPos const&, int)const;
    void _trimBranches(int, int)const;
    void _getFoliageShape(int)const;
    void _checkLine(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _getTreeShape(int, int)const;
    void _limb(BlockSource &, BlockPos const&, BlockPos const&, Block const&)const;
    void _getSteps(BlockPos const&)const;
    void _makeFoliage(BlockSource &, BlockPos const&, std::vector<FancyTreeFeature::FoliageCoords> const&, int &)const;
    void _foliageCluster(BlockSource &, BlockPos const&, FancyTreeFeature::FoliageCoords const&, int &)const;
    FancyTreeFeature(Actor *, bool);
    void _makeBranches(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords> const&, BlockPos const&, int)const;
    void _crossection(BlockSource &, BlockPos const&, BlockPos const&, float, Block const&, int &)const;
    class FoliageCoords {

    public:
        FoliageCoords(FancyTreeFeature::FoliageCoords const&);
        FoliageCoords(FancyTreeFeature::FoliageCoords &&);
        FoliageCoords(BlockPos, int);
        void getBranchBase()const;
    };
};
