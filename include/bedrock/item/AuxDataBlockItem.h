#pragma once

#include <string>
#include <memory>
#include "BlockItem.h"


class AuxDataBlockItem : BlockItem {

public:
    ~AuxDataBlockItem(); // _ZN16AuxDataBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK16AuxDataBlockItem23getLevelDataForAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK16AuxDataBlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    AuxDataBlockItem(std::string const&, int, Block const*); // _ZN16AuxDataBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiPK5Block
};
