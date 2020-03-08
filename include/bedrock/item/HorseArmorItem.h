#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../util/Color"
#include "../util/Vec3"
#include "../container/Container"
#include "unmapped/ItemDescriptor"


class HorseArmorItem : Item {

public:
    static long mHealthPerTier;

    virtual HorseArmorItem::~HorseArmorItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getArmorValue()const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getTier()const;

    bool hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void clearColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void setColor(ItemStack &, Color const&)const;
    HorseArmorItem(std::string const&, int, int, HorseArmorItem::HorseArmorTier);
};
