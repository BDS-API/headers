#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class RedStoneWireBlock : BlockLegacy {

public:
    virtual bool canContainLiquid()const;
    virtual void getColor(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canSpawnOn()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~RedStoneWireBlock();
    RedStoneWireBlock(std::string const&, int);
    void shouldConnectTo(BlockSource &, BlockPos const&, int);
};
