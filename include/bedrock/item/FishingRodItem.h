#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../actor/Mob"
#include "../../unmapped/Block"


class FishingRodItem : Item {

public:
    FishingRodItem::~FishingRodItem()
    virtual bool isHandEquipped()const;
    virtual bool requiresInteract()const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getInteractText(Player const&)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    FishingRodItem(std::string const&, int);
};
