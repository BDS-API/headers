#pragma once

#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../actor/Player"
#include "unmapped/ItemDescriptor"


class MedicineItem : ChemistryItem {

public:
    virtual MedicineItem::~MedicineItem()
    virtual bool isValidAuxValue(int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void setIcon(std::string const&, int);

    MedicineItem(std::string const&, int);
    void getMobEffect(ItemStack const&);
    bool canPlayerDrink(ItemStack const&, Player const&);
};
