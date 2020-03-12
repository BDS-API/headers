#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class ComparatorBlock : ActorBlock {

public:
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    ~ComparatorBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isSignalSource()const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void _refreshOutputState(BlockSource &, BlockPos const&, int)const;
    bool isSubtractMode(BlockSource &, BlockPos const&)const;
    ComparatorBlock(std::string const&, int, bool);
    void getSignal(BlockSource &, BlockPos const&, int)const;
};
