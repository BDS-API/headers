#pragma once

#include <string>
#include "./ChemistryItem.h"
#include <memory>
#include "../level/Level.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class MedicineItem : ChemistryItem {

public:
    virtual ~MedicineItem();
    virtual bool isValidAuxValue(int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void setIcon(std::string const&, int);

    MedicineItem(std::string const&, int);
    void getMobEffect(ItemStack const&);
    bool canPlayerDrink(ItemStack const&, Player const&);
};
