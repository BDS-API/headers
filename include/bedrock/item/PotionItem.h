#pragma once

#include <string>
#include "../actor/ThrownPotion.h"
#include "./ItemStackBase.h"
#include <memory>
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class PotionItem : Item {

public:
    virtual ~PotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void uniqueAuxValues()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType()const;

    PotionItem(std::string const&, int);
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    void getEffectId(ItemDescriptor const&)const;
};
