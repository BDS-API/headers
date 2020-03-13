#pragma once

#include <string>
#include <memory>
#include "BlockItem.h"


class SaplingBlockItem : BlockItem {

public:
    ~SaplingBlockItem(); // _ZN16SaplingBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK16SaplingBlockItem23getLevelDataForAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK16SaplingBlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    SaplingBlockItem(std::string const&, int); // _ZN16SaplingBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
