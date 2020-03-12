#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class FireBlock : BlockLegacy {

public:
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void mayPick()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~FireBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    FireBlock(std::string const&, int);
    bool canBurn(BlockSource &, BlockPos const&);
    void getTickDelay()const;
    void registerFlammableBlocks();
    void getFlammability(BlockSource &, BlockPos const&, int)const;
    void _tryEvictBeehive(BlockSource &, BlockPos const&)const;
    void checkBurn(BlockSource &, BlockPos const&, int, Random &, int)const;
    void getFireOdds(BlockSource &, BlockPos const&)const;
    bool isValidFireLocation(BlockSource &, BlockPos const&)const;
};
