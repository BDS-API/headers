#pragma once

#include <string>
#include "ActorBlock.h"


class CommandBlock : ActorBlock {

public:
    static long mCBModeMap;

    ~CommandBlock(); // _ZN12CommandBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12CommandBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isInteractiveBlock()const; // _ZNK12CommandBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12CommandBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK12CommandBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK12CommandBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK12CommandBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12CommandBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK12CommandBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12CommandBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK12CommandBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK12CommandBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK12CommandBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK12CommandBlock13getMappedFaceEhRK5Block
//  CommandBlock(std::string const&, int, CommandBlockMode); //TODO: incomplete function definition // _ZN12CommandBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi16CommandBlockMode
//  void updateBlock(BlockSource &, BlockPos const&, CommandBlockMode, bool)const; //TODO: incomplete function definition // _ZNK12CommandBlock11updateBlockER11BlockSourceRK8BlockPos16CommandBlockModeb
    void getMode()const; // _ZNK12CommandBlock7getModeEv
    bool isCommandBlockType(Block const&)const; // _ZNK12CommandBlock18isCommandBlockTypeERK5Block
    void _installCircuit(BlockSource &, BlockPos const&, bool)const; // _ZNK12CommandBlock15_installCircuitER11BlockSourceRK8BlockPosb
    void _getCommandBlockActor(BlockSource &, BlockPos const&)const; // _ZNK12CommandBlock21_getCommandBlockActorER11BlockSourceRK8BlockPos
    void _execute(BlockSource &, CommandBlockActor &, BlockPos const&, bool)const; // _ZNK12CommandBlock8_executeER11BlockSourceR17CommandBlockActorRK8BlockPosb
    void _executeChainBlock(BlockSource &, BlockPos const&, CommandBlockActor &, bool)const; // _ZNK12CommandBlock18_executeChainBlockER11BlockSourceRK8BlockPosR17CommandBlockActorb
    void _executeChain(BlockSource &, BlockPos const&)const; // _ZNK12CommandBlock13_executeChainER11BlockSourceRK8BlockPos
};
