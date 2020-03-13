#pragma once

#include <string>
#include <memory>
#include "ChemistryItem.h"


class MedicineItem : ChemistryItem {

public:
    ~MedicineItem(); // _ZN12MedicineItemD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK12MedicineItem15isValidAuxValueEi
    virtual void use(ItemStack &, Player &)const; // _ZNK12MedicineItem3useER9ItemStackR6Player
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK12MedicineItem15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK12MedicineItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void setIcon(std::string const&, int); // _ZN12MedicineItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    MedicineItem(std::string const&, int); // _ZN12MedicineItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getMobEffect(ItemStack const&); // _ZN12MedicineItem12getMobEffectERK9ItemStack
    bool canPlayerDrink(ItemStack const&, Player const&); // _ZN12MedicineItem14canPlayerDrinkERK9ItemStackRK6Player
};
