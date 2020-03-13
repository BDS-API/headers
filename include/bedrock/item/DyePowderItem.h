#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "FertilizerItem.h"


class DyePowderItem : FertilizerItem {

public:
    static long mColorMap;

    ~DyePowderItem(); // _ZN13DyePowderItemD2Ev
    virtual bool isDye()const; // _ZNK13DyePowderItem5isDyeEv
    virtual bool isFertilizer(int)const; // _ZNK13DyePowderItem12isFertilizerEi
    virtual bool isValidAuxValue(int)const; // _ZNK13DyePowderItem15isValidAuxValueEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK13DyePowderItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK13DyePowderItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK13DyePowderItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN13DyePowderItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK13DyePowderItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    DyePowderItem(std::string const&, int); // _ZN13DyePowderItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
