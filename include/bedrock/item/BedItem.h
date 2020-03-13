#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class BedItem : Item {

public:
    ~BedItem(); // _ZN7BedItemD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK7BedItem15isValidAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK7BedItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK7BedItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN7BedItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const; // _ZNK7BedItem22_checkUseOnPermissionsER5ActorR9ItemStackRKhRK8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK7BedItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BedItem(std::string const&, int); // _ZN7BedItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _tryUseOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK7BedItem9_tryUseOnER9ItemStackR5Actor8BlockPoshfff
    void _calculateHeadAndFeetPos(Actor &, BlockPos &, BlockPos &)const; // _ZNK7BedItem24_calculateHeadAndFeetPosER5ActorR8BlockPosS3_
    void _calculateDir(Actor &)const; // _ZNK7BedItem13_calculateDirER5Actor
};
