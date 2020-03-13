#pragma once

#include <string>
#include <memory>
#include "Item.h"


class CoalItem : Item {

public:
    ~CoalItem(); // _ZN8CoalItemD2Ev
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK8CoalItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK8CoalItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN8CoalItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    CoalItem(std::string const&, int); // _ZN8CoalItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isCharcoal(ItemInstance const&); // _ZN8CoalItem10isCharcoalERK12ItemInstance
};
