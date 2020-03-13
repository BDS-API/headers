#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class BlockItem : Item {

public:
    ~BlockItem(); // _ZN9BlockItemD2Ev
    virtual bool isExperimental(ItemDescriptor const*)const; // _ZNK9BlockItem14isExperimentalEPK14ItemDescriptor
    virtual bool isDestructive(int)const; // _ZNK9BlockItem13isDestructiveEi
    virtual bool isValidAuxValue(int)const; // _ZNK9BlockItem15isValidAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK9BlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual bool isEmissive(int)const; // _ZNK9BlockItem10isEmissiveEi
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK9BlockItem7getIconERK13ItemStackBaseib
    virtual void getIconYOffset()const; // _ZNK9BlockItem14getIconYOffsetEv
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK9BlockItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK9BlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BlockItem(std::string const&, int); // _ZN9BlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
