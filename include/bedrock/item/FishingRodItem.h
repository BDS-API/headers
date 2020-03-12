#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "ItemStackBase.h"


class FishingRodItem : Item {

public:
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual bool requiresInteract()const;
    virtual bool isHandEquipped()const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string getInteractText(Player const&)const;
    virtual void getEnchantValue()const;
    virtual void getEnchantSlot()const;
    virtual void setIcon(std::string const&, int);
    ~FishingRodItem();
    FishingRodItem(std::string const&, int);
};
