#pragma once

#include <string>
#include "ActorBlock.h"


class ComparatorBlock : ActorBlock {

public:
    virtual bool isSignalSource()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isInteractiveBlock()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSpawnOn()const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~ComparatorBlock();
    virtual void getVariant(Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void getSignal(BlockSource &, BlockPos const&, int)const;
    void _refreshOutputState(BlockSource &, BlockPos const&, int)const;
    bool isSubtractMode(BlockSource &, BlockPos const&)const;
    ComparatorBlock(std::string const&, int, bool);
};
