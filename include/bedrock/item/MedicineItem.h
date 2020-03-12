#pragma once

#include "ChemistryItem.h"
#include "ItemStack.h"
#include <string>
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include <memory>
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class MedicineItem : ChemistryItem {

public:
    virtual void use(ItemStack &, Player &)const;
    ~MedicineItem();
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void setIcon(std::string const&, int);
    virtual bool isValidAuxValue(int)const;
    bool canPlayerDrink(ItemStack const&, Player const&);
    void getMobEffect(ItemStack const&);
    MedicineItem(std::string const&, int);
};
