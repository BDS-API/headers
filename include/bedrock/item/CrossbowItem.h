#pragma once

#include "ItemStack.h"
#include <string>
#include "RangedWeaponItem.h"
#include "../actor/Player.h"
#include "ItemStackBase.h"
#include "../actor/Mob.h"
#include "ItemInstance.h"
#include "../level/Level.h"


class CrossbowItem : RangedWeaponItem {

public:
    static long DEFAULT_USE_DURATION;

    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getEnchantSlot()const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual bool canBeCharged()const;
    ~CrossbowItem();
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void setIcon(std::string const&, int);
    virtual void use(ItemStack &, Player &)const;
    void _getMaxUseDuration(ItemStack const&)const;
    void _shootArrow(ItemInstance const&, ItemInstance const&, Player &)const;
    void _shootFirework(ItemInstance const&, Player &)const;
    CrossbowItem(std::string const&, int);
    void _getShootDir(Player const&, float)const;
};
