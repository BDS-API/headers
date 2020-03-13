#pragma once

#include <string>
#include "ActorBlock.h"


class JukeboxBlock : ActorBlock {

public:
    ~JukeboxBlock(); // _ZN12JukeboxBlockD2Ev
    virtual bool isSignalSource()const; // _ZNK12JukeboxBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK12JukeboxBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void use(Player &, BlockPos const&)const; // _ZNK12JukeboxBlock3useER6PlayerRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK12JukeboxBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK12JukeboxBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    JukeboxBlock(std::string const&, int); // _ZN12JukeboxBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _installCircuit(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock15_installCircuitER11BlockSourceRK8BlockPos
    void _getJukeboxBlockEntity(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock22_getJukeboxBlockEntityER11BlockSourceRK8BlockPos
    void _dropRecording(BlockSource &, BlockPos const&)const; // _ZNK12JukeboxBlock14_dropRecordingER11BlockSourceRK8BlockPos
    void _setRecord(BlockSource &, BlockPos const&, ItemStack const&)const; // _ZNK12JukeboxBlock10_setRecordER11BlockSourceRK8BlockPosRK9ItemStack
};
