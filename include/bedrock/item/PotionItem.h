#pragma once

#include <memory>
#include "Item.h"
#include <string>


class PotionItem : Item {

public:
    virtual void uniqueAuxValues()const;
    virtual void use(ItemStack &, Player &)const;
    ~PotionItem();
    virtual bool isValidAuxValue(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getPotionType()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void setIcon(std::string const&, int);
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    PotionItem(std::string const&, int);
    void getEffectId(ItemDescriptor const&)const;
};
