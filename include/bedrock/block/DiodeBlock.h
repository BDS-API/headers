#pragma once

#include <string>
#include "BlockLegacy.h"


class DiodeBlock : BlockLegacy {

public:
    ~DiodeBlock(); // _ZN10DiodeBlockD2Ev
    virtual bool isSignalSource()const; // _ZNK10DiodeBlock14isSignalSourceEv
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const; // _ZNK10DiodeBlock15getDirectSignalER11BlockSourceRK8BlockPosi
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK10DiodeBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10DiodeBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10DiodeBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK10DiodeBlock10getVariantERK5Block
    virtual bool canSpawnOn()const; // _ZNK10DiodeBlock10canSpawnOnEv
    virtual void getSignal(BlockSource &, BlockPos const&, int)const; // _ZNK10DiodeBlock9getSignalER11BlockSourceRK8BlockPosi
    virtual bool isLocked(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock8isLockedER11BlockSourceRK8BlockPos
    virtual bool isSameDiode(Block const&)const; // _ZNK10DiodeBlock11isSameDiodeERK5Block
    virtual void shouldPrioritize(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock16shouldPrioritizeER11BlockSourceRK8BlockPos
    virtual bool isOn()const; // _ZNK10DiodeBlock4isOnEv
    virtual void shouldTurnOn(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock12shouldTurnOnER11BlockSourceRK8BlockPos
    virtual void getInputSignal(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock14getInputSignalER11BlockSourceRK8BlockPos
    virtual bool isAlternateInput(Block const&)const; // _ZNK10DiodeBlock16isAlternateInputERK5Block
    virtual void getAlternateSignal(BlockSource &, BlockPos const&)const; // _ZNK10DiodeBlock18getAlternateSignalER11BlockSourceRK8BlockPos
    virtual void getOutputSignal(Block const&)const; // _ZNK10DiodeBlock15getOutputSignalERK5Block
    virtual void getTurnOffDelay(Block const&)const; // _ZNK10DiodeBlock15getTurnOffDelayERK5Block
    bool isDiode(Block const&); // _ZN10DiodeBlock7isDiodeERK5Block
    DiodeBlock(std::string const&, int, bool); // _ZN10DiodeBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void checkTickOnNeighbor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10DiodeBlock19checkTickOnNeighborER11BlockSourceRK8BlockPosRK5Block
    void getAlternateSignalAt(BlockSource &, BlockPos const&, int)const; // _ZNK10DiodeBlock20getAlternateSignalAtER11BlockSourceRK8BlockPosi
};
