#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class BoatItem : Item {

public:
    ~BoatItem(); // _ZN8BoatItemD2Ev
    virtual bool isStackedByData()const; // _ZNK8BoatItem15isStackedByDataEv
    virtual bool isLiquidClipItem(int)const; // _ZNK8BoatItem16isLiquidClipItemEi
    virtual bool isValidAuxValue(int)const; // _ZNK8BoatItem15isValidAuxValueEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK8BoatItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK8BoatItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK8BoatItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN8BoatItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK8BoatItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BoatItem(std::string const&, int); // _ZN8BoatItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getRotationBasedOnFacing(unsigned char)const; // _ZNK8BoatItem25_getRotationBasedOnFacingEh
};
