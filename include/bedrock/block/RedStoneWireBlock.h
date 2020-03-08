#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class RedStoneWireBlock : BlockLegacy {

public:
    virtual RedStoneWireBlock::~RedStoneWireBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSpawnOn()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    RedStoneWireBlock(std::string const&, int);
    void shouldConnectTo(BlockSource &, BlockPos const&, int);
};
