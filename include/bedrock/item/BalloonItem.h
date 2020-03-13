#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "ChemistryItem.h"


class BalloonItem : ChemistryItem {

public:
    ~BalloonItem(); // _ZN11BalloonItemD2Ev
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const; // _ZNK11BalloonItem8getColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERK14ItemDescriptor
    virtual bool isTintable()const; // _ZNK11BalloonItem10isTintableEv
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK11BalloonItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK11BalloonItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BalloonItem(std::string const&, int); // _ZN11BalloonItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getColorIndex(ItemDescriptor const&)const; // _ZNK11BalloonItem14_getColorIndexERK14ItemDescriptor
    bool canAttachToBlock(BlockPos const&, BlockSource const&); // _ZN11BalloonItem16canAttachToBlockERK8BlockPosRK11BlockSource
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const; // _ZNK11BalloonItem11_createKnotER11BlockSource8BlockPosRK12ItemInstance
    void getBalloonSpawnPos(BlockPos const&); // _ZN11BalloonItem18getBalloonSpawnPosERK8BlockPos
};
