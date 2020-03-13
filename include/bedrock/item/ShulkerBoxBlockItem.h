#pragma once

#include <string>
#include <memory>
#include "AuxDataBlockItem.h"


class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    ~ShulkerBoxBlockItem(); // _ZN19ShulkerBoxBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK19ShulkerBoxBlockItem23getLevelDataForAuxValueEi
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK19ShulkerBoxBlockItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK19ShulkerBoxBlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const; // _ZNK19ShulkerBoxBlockItem26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase
    ShulkerBoxBlockItem(std::string const&, int, Block const*); // _ZN19ShulkerBoxBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiPK5Block
    std::string buildContainedItemList(std::unique_ptr<CompoundTag> const&)const; // _ZNK19ShulkerBoxBlockItem22buildContainedItemListB5cxx11ERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
};
