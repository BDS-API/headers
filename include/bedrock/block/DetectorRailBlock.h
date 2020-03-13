#pragma once

#include <string>
#include "BaseRailBlock.h"
#include "../util/BlockPos.h"


class DetectorRailBlock : BaseRailBlock {

public:
    ~DetectorRailBlock(); // _ZN17DetectorRailBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17DetectorRailBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isSignalSource()const; // _ZNK17DetectorRailBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK17DetectorRailBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK17DetectorRailBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK17DetectorRailBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK17DetectorRailBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool hasComparatorSignal()const; // _ZNK17DetectorRailBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK17DetectorRailBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK17DetectorRailBlock10getVariantERK5Block
    DetectorRailBlock(std::string const&, int); // _ZN17DetectorRailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getTickDelay()const; // _ZNK17DetectorRailBlock12getTickDelayEv
    void checkPressed(BlockSource &, BlockPos const&)const; // _ZNK17DetectorRailBlock12checkPressedER11BlockSourceRK8BlockPos
    void getSearchBB(BlockPos)const; // _ZNK17DetectorRailBlock11getSearchBBE8BlockPos
    void handlePressed(BlockSource &, BlockPos const&, bool)const; // _ZNK17DetectorRailBlock13handlePressedER11BlockSourceRK8BlockPosb
};
