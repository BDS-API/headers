#pragma once

#include <string>
#include "ActorBlock.h"


class ComparatorBlock : ActorBlock {

public:
    ~ComparatorBlock(); // _ZN15ComparatorBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15ComparatorBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isInteractiveBlock()const; // _ZNK15ComparatorBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK15ComparatorBlock14isSignalSourceEv
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const; // _ZNK15ComparatorBlock15getDirectSignalER11BlockSourceRK8BlockPosi
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK15ComparatorBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK15ComparatorBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK15ComparatorBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK15ComparatorBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK15ComparatorBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK15ComparatorBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15ComparatorBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15ComparatorBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK15ComparatorBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK15ComparatorBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK15ComparatorBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const; // _ZNK15ComparatorBlock12triggerEventER11BlockSourceRK8BlockPosii
    virtual void getVariant(Block const&)const; // _ZNK15ComparatorBlock10getVariantERK5Block
    virtual bool canSpawnOn()const; // _ZNK15ComparatorBlock10canSpawnOnEv
    ComparatorBlock(std::string const&, int, bool); // _ZN15ComparatorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void _refreshOutputState(BlockSource &, BlockPos const&, int)const; // _ZNK15ComparatorBlock19_refreshOutputStateER11BlockSourceRK8BlockPosi
    void _installCircuit(BlockSource &, BlockPos const&, bool)const; // _ZNK15ComparatorBlock15_installCircuitER11BlockSourceRK8BlockPosb
    void getSignal(BlockSource &, BlockPos const&, int)const; // _ZNK15ComparatorBlock9getSignalER11BlockSourceRK8BlockPosi
    bool isSubtractMode(BlockSource &, BlockPos const&)const; // _ZNK15ComparatorBlock14isSubtractModeER11BlockSourceRK8BlockPos
};
