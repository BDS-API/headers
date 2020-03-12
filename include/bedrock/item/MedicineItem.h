#pragma once

#include <memory>
#include <string>
#include "ChemistryItem.h"


class MedicineItem : ChemistryItem {

public:
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~MedicineItem();
    virtual void use(ItemStack &, Player &)const;
    virtual void setIcon(std::string const&, int);
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    bool canPlayerDrink(ItemStack const&, Player const&);
    MedicineItem(std::string const&, int);
    void getMobEffect(ItemStack const&);
};
