#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"


class ComparatorBlock : ActorBlock {

public:
    virtual ComparatorBlock::~ComparatorBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isSignalSource()const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void getVariant(Block const&)const;
    virtual bool canSpawnOn()const;

    ComparatorBlock(std::string const&, int, bool);
    void _refreshOutputState(BlockSource &, BlockPos const&, int)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void getSignal(BlockSource &, BlockPos const&, int)const;
    bool isSubtractMode(BlockSource &, BlockPos const&)const;
};
