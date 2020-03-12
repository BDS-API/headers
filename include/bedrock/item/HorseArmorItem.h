#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "../util/Color.h"
#include "../block/unmapped/BlockSource.h"
#include "ItemStackBase.h"
#include "unmapped/ItemDescriptor.h"


class HorseArmorItem : Item {

public:
    static long mHealthPerTier;

    ~HorseArmorItem();
    virtual bool isTintable()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getArmorValue()const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual void getTier()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const;
    void clearColor(std::unique_ptr<CompoundTag> const&)const;
//  HorseArmorItem(std::string const&, int, int, HorseArmorItem::HorseArmorTier); //TODO: incomplete function definition
    void setColor(ItemStack &, Color const&)const;
};
