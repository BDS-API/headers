#pragma once

#include "../../../unmapped/Block.h"
#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include <vector>
#include "../../util/BlockPos.h"


class FancyTreeFeature : TreeFeature {

public:
    class FoliageCoords;

    ~FancyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _checkLine(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _getTreeShape(int, int)const;
    void _getSteps(BlockPos const&)const;
    void _makeBranches(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords> const&, BlockPos const&, int)const;
    void _getFoliageShape(int)const;
    void _trimBranches(int, int)const;
    void _crossection(BlockSource &, BlockPos const&, BlockPos const&, float, Block const&, int &)const;
    void _makeFoliage(BlockSource &, BlockPos const&, std::vector<FancyTreeFeature::FoliageCoords> const&, int &)const;
    void _foliageCluster(BlockSource &, BlockPos const&, FancyTreeFeature::FoliageCoords const&, int &)const;
    FancyTreeFeature(Actor *, bool);
    void _limb(BlockSource &, BlockPos const&, BlockPos const&, Block const&)const;
    void _checkLocation(BlockSource &, BlockPos const&, int &)const;
    void _makeTrunk(BlockSource &, BlockPos const&, int)const;
    class FoliageCoords {

    public:
        FoliageCoords(BlockPos, int);
        FoliageCoords(FancyTreeFeature::FoliageCoords const&);
        FoliageCoords(FancyTreeFeature::FoliageCoords &&);
        void getBranchBase()const;
    };
};
