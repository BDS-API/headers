#pragma once

#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../actor/Player"
#include "../actor/ThrownPotion"
#include "unmapped/ItemDescriptor"


class PotionItem : Item {

public:
    virtual PotionItem::~PotionItem()
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void uniqueAuxValues()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType()const;

    PotionItem(std::string const&, int);
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    void getEffectId(ItemDescriptor const&)const;
};
