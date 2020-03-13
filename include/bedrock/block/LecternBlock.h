#pragma once

#include <string>
#include "ActorBlock.h"


class LecternBlock : ActorBlock {

public:
    ~LecternBlock(); // _ZN12LecternBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12LecternBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isInteractiveBlock()const; // _ZNK12LecternBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK12LecternBlock14isSignalSourceEv
    virtual bool canContainLiquid()const; // _ZNK12LecternBlock16canContainLiquidEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK12LecternBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK12LecternBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12LecternBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK12LecternBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12LecternBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK12LecternBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12LecternBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void attack(Player *, BlockPos const&)const; // _ZNK12LecternBlock6attackEP6PlayerRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK12LecternBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK12LecternBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK12LecternBlock28isAuxValueRelevantForPickingEv
    LecternBlock(std::string const&, int); // _ZN12LecternBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _dropBook(Player &, BlockPos const&)const; // _ZNK12LecternBlock9_dropBookER6PlayerRK8BlockPos
    void _getBlockActor(BlockSource &, BlockPos const&)const; // _ZNK12LecternBlock14_getBlockActorER11BlockSourceRK8BlockPos
    void emitRedstonePulse(BlockSource &, BlockPos const&)const; // _ZNK12LecternBlock17emitRedstonePulseER11BlockSourceRK8BlockPos
    void _updateRedstone(BlockSource &, BlockPos const&, bool)const; // _ZNK12LecternBlock15_updateRedstoneER11BlockSourceRK8BlockPosb
};
