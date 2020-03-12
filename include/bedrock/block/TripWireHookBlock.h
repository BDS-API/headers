#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class TripWireHookBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canSpawnOn()const;
    ~TripWireHookBlock();
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void playSound(BlockSource &, BlockPos const&, bool, bool, bool, bool)const;
    void _getShape(int, AABB &)const;
    void calculateState(BlockSource &, BlockPos const&, bool, bool, int, Block const&)const;
    void getTickDelay()const;
    TripWireHookBlock(std::string const&, int);
};
