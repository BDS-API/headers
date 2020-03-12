#pragma once

#include <string>
#include "BlockLegacy.h"


class FireBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    ~FireBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    virtual void mayPick()const;
    virtual void waterSpreadCausesSpawn()const;
    void checkBurn(BlockSource &, BlockPos const&, int, Random &, int)const;
    FireBlock(std::string const&, int);
    void getFlammability(BlockSource &, BlockPos const&, int)const;
    void getTickDelay()const;
    bool canBurn(BlockSource &, BlockPos const&);
    void _tryEvictBeehive(BlockSource &, BlockPos const&)const;
    void registerFlammableBlocks();
    bool isValidFireLocation(BlockSource &, BlockPos const&)const;
    void getFireOdds(BlockSource &, BlockPos const&)const;
};
