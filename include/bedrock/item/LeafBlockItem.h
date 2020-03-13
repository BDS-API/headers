#pragma once

#include <string>
#include <memory>
#include "BlockItem.h"


class LeafBlockItem : BlockItem {

public:
    ~LeafBlockItem(); // _ZN13LeafBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK13LeafBlockItem23getLevelDataForAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK13LeafBlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK13LeafBlockItem11fixupOnLoadER13ItemStackBase
    virtual void fixupOnLoad(ItemStackBase &, Level &)const; // _ZNK13LeafBlockItem11fixupOnLoadER13ItemStackBaseR5Level
    LeafBlockItem(std::string const&, int, Block const*); // _ZN13LeafBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiPK5Block
};
