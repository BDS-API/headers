#pragma once

#include "ItemStack.h"
#include <string>
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "../actor/ThrownPotion.h"
#include "unmapped/ItemDescriptor.h"


class PotionItem : Item {

public:
    virtual void uniqueAuxValues()const;
    virtual bool isValidAuxValue(int)const;
    ~PotionItem();
    virtual void use(ItemStack &, Player &)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getPotionType()const;
    virtual void setIcon(std::string const&, int);
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool isGlint(ItemStackBase const&)const;
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    PotionItem(std::string const&, int);
    void getEffectId(ItemDescriptor const&)const;
};
