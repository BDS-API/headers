#pragma once

#include <string>
#include "Item.h"


class FishingRodItem : Item {

public:
    virtual bool requiresInteract()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual bool isHandEquipped()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getEnchantValue()const;
    virtual std::string getInteractText(Player const&)const;
    virtual void setIcon(std::string const&, int);
    ~FishingRodItem();
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getEnchantSlot()const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    FishingRodItem(std::string const&, int);
};
