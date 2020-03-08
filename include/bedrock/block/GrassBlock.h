#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class GrassBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual GrassBlock::~GrassBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeOriginalSurface()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;

    GrassBlock(std::string const&, int);
    void _getGrassSide(int)const;
    void _canBeGrass(BlockSource const&, BlockPos const&)const;
    void _randomWalk(BlockSource &, BlockPos &, int)const;
    void _translucencyAllowsGrass(Material const&)const;
    void _isGrowthBlockingSolidBlock(Block const&, Material const&)const;
    void _isGrowthBlockingStairBlock(Block const&)const;
    void _isGrowthBlockingHalfSlabBlock(Block const&)const;
};
