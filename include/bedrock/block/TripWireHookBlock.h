#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../util/AABB"


class TripWireHookBlock : BlockLegacy {

public:
    virtual TripWireHookBlock::~TripWireHookBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canSpawnOn()const;

    TripWireHookBlock(std::string const&, int);
    void _getShape(int, AABB &)const;
    void getTickDelay()const;
    void calculateState(BlockSource &, BlockPos const&, bool, bool, int, Block const&)const;
    void playSound(BlockSource &, BlockPos const&, bool, bool, bool, bool)const;
};
