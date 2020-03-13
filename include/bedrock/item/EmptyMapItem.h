#pragma once

#include <string>
#include <memory>
#include "ComplexItem.h"


class EmptyMapItem : ComplexItem {

public:
    ~EmptyMapItem(); // _ZN12EmptyMapItemD2Ev
    virtual bool requiresInteract()const; // _ZNK12EmptyMapItem16requiresInteractEv
    virtual void use(ItemStack &, Player &)const; // _ZNK12EmptyMapItem3useER9ItemStackR6Player
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK12EmptyMapItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string getInteractText(Player const&)const; // _ZNK12EmptyMapItem15getInteractTextB5cxx11ERK6Player
    EmptyMapItem(std::string const&, short); // _ZN12EmptyMapItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void addPlayerMarker(ItemStack &); // _ZN12EmptyMapItem15addPlayerMarkerER9ItemStack
    void addPlayerMarker(ItemInstance &); // _ZN12EmptyMapItem15addPlayerMarkerER12ItemInstance
    bool isLocatorMap(ItemStack const&); // _ZN12EmptyMapItem12isLocatorMapERK9ItemStack
};
