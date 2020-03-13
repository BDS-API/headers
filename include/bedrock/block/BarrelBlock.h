#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class BarrelBlock : FaceDirectionalBlock {

public:
    ~BarrelBlock(); // _ZN11BarrelBlockD2Ev
    virtual bool isContainerBlock()const; // _ZNK11BarrelBlock16isContainerBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK11BarrelBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK11BarrelBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK11BarrelBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK11BarrelBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK11BarrelBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void use(Player &, BlockPos const&)const; // _ZNK11BarrelBlock3useER6PlayerRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK11BarrelBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK11BarrelBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK11BarrelBlock10getVariantERK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK11BarrelBlock11getFaceFlipEhRK5Block
    BarrelBlock(std::string const&, int, Material const&); // _ZN11BarrelBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void setOpen(bool, BlockSource &, BlockPos const&); // _ZN11BarrelBlock7setOpenEbR11BlockSourceRK8BlockPos
};
