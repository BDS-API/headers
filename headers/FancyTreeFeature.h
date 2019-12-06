#pragma once

class FancyTreeFeature : TreeFeature {

public:
    virtual ~FancyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void FancyTreeFeature(Actor *);
    void _checkLocation(BlockSource &, BlockPos const&, int &)const;
    void _getTreeShape(int, int)const;
    void _checkLine(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _makeFoliage(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords, std::allocator<FancyTreeFeature::FoliageCoords>> const&)const;
    void _makeTrunk(BlockSource &, BlockPos const&, int)const;
    void _makeBranches(BlockSource &, std::vector<FancyTreeFeature::FoliageCoords, std::allocator<FancyTreeFeature::FoliageCoords>> const&, BlockPos const&, int)const;
    void _getSteps(BlockPos const&)const;
    void _foliageCluster(BlockSource &, FancyTreeFeature::FoliageCoords const&)const;
    void _crossection(BlockSource &, BlockPos const&, float, Block const&)const;
    void _getFoliageShape(int)const;
    void _limb(BlockSource &, BlockPos const&, BlockPos const&, Block const&)const;
    void _trimBranches(int, int)const;
};
