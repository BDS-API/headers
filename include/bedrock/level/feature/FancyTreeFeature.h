#pragma once

#include "../../util/BlockPos.h"
#include "TreeFeature.h"
#include <vector>


class FancyTreeFeature : TreeFeature {

public:
    class FoliageCoords;

    ~FancyTreeFeature(); // _ZN16FancyTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16FancyTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    FancyTreeFeature(Actor *, bool); // _ZN16FancyTreeFeatureC2EP5Actorb
    void _checkLocation(BlockSource &, BlockPos const&, int &)const; // _ZNK16FancyTreeFeature14_checkLocationER11BlockSourceRK8BlockPosRi
    void _getTreeShape(int, int)const; // _ZNK16FancyTreeFeature13_getTreeShapeEii
    void _checkLine(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK16FancyTreeFeature10_checkLineER11BlockSourceRK8BlockPosS4_
    void _makeFoliage(BlockSource &, BlockPos const&, std::vector<FancyTreeFeature::FoliageCoords> const&, int &)const; // _ZNK16FancyTreeFeature12_makeFoliageER11BlockSourceRK8BlockPosRKSt6vectorINS_13FoliageCoordsESaIS6_EERi
    void _makeTrunk(BlockSource &, BlockPos const&, int)const; // _ZNK16FancyTreeFeature10_makeTrunkER11BlockSourceRK8BlockPosi
    void _makeBranches(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords> const&, BlockPos const&, int)const; // _ZNK16FancyTreeFeature13_makeBranchesER11BlockSourceRKSt6vectorINS_13FoliageCoordsESaIS3_EERK8BlockPosi
    void _getSteps(BlockPos const&)const; // _ZNK16FancyTreeFeature9_getStepsERK8BlockPos
    void _foliageCluster(BlockSource &, BlockPos const&, FancyTreeFeature::FoliageCoords const&, int &)const; // _ZNK16FancyTreeFeature15_foliageClusterER11BlockSourceRK8BlockPosRKNS_13FoliageCoordsERi
    void _crossection(BlockSource &, BlockPos const&, BlockPos const&, float, Block const&, int &)const; // _ZNK16FancyTreeFeature12_crossectionER11BlockSourceRK8BlockPosS4_fRK5BlockRi
    void _getFoliageShape(int)const; // _ZNK16FancyTreeFeature16_getFoliageShapeEi
    void _limb(BlockSource &, BlockPos const&, BlockPos const&, Block const&)const; // _ZNK16FancyTreeFeature5_limbER11BlockSourceRK8BlockPosS4_RK5Block
    void _trimBranches(int, int)const; // _ZNK16FancyTreeFeature13_trimBranchesEii
    class FoliageCoords {

    public:
        FoliageCoords(BlockPos, int); // _ZN16FancyTreeFeature13FoliageCoordsC2E8BlockPosi
        void getBranchBase()const; // _ZNK16FancyTreeFeature13FoliageCoords13getBranchBaseEv
        FoliageCoords(FancyTreeFeature::FoliageCoords &&); // _ZN16FancyTreeFeature13FoliageCoordsC2EOS0_
        FoliageCoords(FancyTreeFeature::FoliageCoords const&); // _ZN16FancyTreeFeature13FoliageCoordsC2ERKS0_
    };
};
