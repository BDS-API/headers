#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class SkullItem : Item {

public:
    ~SkullItem(); // _ZN9SkullItemD2Ev
    virtual void getBlockShape()const; // _ZNK9SkullItem13getBlockShapeEv
    virtual void getLevelDataForAuxValue(int)const; // _ZNK9SkullItem23getLevelDataForAuxValueEi
    virtual bool isValidAuxValue(int)const; // _ZNK9SkullItem15isValidAuxValueEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK9SkullItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK9SkullItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK9SkullItem7getIconERK13ItemStackBaseib
    virtual std::string getAuxValuesDescription()const; // _ZNK9SkullItem23getAuxValuesDescriptionB5cxx11Ev
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK9SkullItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK9SkullItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    SkullItem(std::string const&, int); // _ZN9SkullItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const; // _ZNK9SkullItem12_canDispenseER11BlockSourceRK4Vec3h
};
