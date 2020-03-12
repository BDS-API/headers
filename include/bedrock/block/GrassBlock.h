#pragma once

#include <string>
#include "BlockLegacy.h"


class GrassBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    ~GrassBlock();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getColor(Block const&)const;
    virtual bool canBeOriginalSurface()const;
    void _isGrowthBlockingSolidBlock(Block const&, Material const&)const;
    void _isGrowthBlockingStairBlock(Block const&)const;
    void _randomWalk(BlockSource &, BlockPos &, int)const;
    GrassBlock(std::string const&, int);
    void _getGrassSide(int)const;
    void _isGrowthBlockingHalfSlabBlock(Block const&)const;
    void _canBeGrass(BlockSource const&, BlockPos const&)const;
    void _translucencyAllowsGrass(Material const&)const;
};
