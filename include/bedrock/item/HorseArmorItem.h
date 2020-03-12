#pragma once

#include <memory>
#include "Item.h"
#include <string>


class HorseArmorItem : Item {

public:
    static long mHealthPerTier;

    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    ~HorseArmorItem();
    virtual void getTier()const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual void getArmorValue()const;
    virtual bool isTintable()const;
    void clearColor(std::unique_ptr<CompoundTag> const&)const;
//  HorseArmorItem(std::string const&, int, int, HorseArmorItem::HorseArmorTier); //TODO: incomplete function definition
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const;
    void setColor(ItemStack &, Color const&)const;
};
