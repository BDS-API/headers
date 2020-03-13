#pragma once

#include <string>
#include "ActorBlock.h"


class ChestBlock : ActorBlock {

public:
    ~ChestBlock(); // _ZN10ChestBlockD2Ev
    virtual bool isContainerBlock()const; // _ZNK10ChestBlock16isContainerBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK10ChestBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK10ChestBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK10ChestBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10ChestBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK10ChestBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10ChestBlock6onMoveER11BlockSourceRK8BlockPosS4_
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const; // _ZNK10ChestBlock20detachesOnPistonMoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK10ChestBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK10ChestBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void use(Player &, BlockPos const&)const; // _ZNK10ChestBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10ChestBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK10ChestBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK10ChestBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK10ChestBlock13getMappedFaceEhRK5Block
    virtual void init(); // _ZN10ChestBlock4initEv
//  ChestBlock(std::string const&, int, ChestBlock::ChestType, MaterialType); //TODO: incomplete function definition // _ZN10ChestBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiNS_9ChestTypeE12MaterialType
    void updateSignalStrength(BlockSource &, BlockPos const&, int)const; // _ZNK10ChestBlock20updateSignalStrengthER11BlockSourceRK8BlockPosi
};
