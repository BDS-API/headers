#pragma once

#include <string>
#include "RangedWeaponItem.h"


class CrossbowItem : RangedWeaponItem {

public:
    static long DEFAULT_USE_DURATION;

    virtual bool canBeCharged()const;
    ~CrossbowItem();
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void getEnchantSlot()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void use(ItemStack &, Player &)const;
    void _getShootDir(Player const&, float)const;
    CrossbowItem(std::string const&, int);
    void _shootArrow(ItemInstance const&, ItemInstance const&, Player &)const;
    void _getMaxUseDuration(ItemStack const&)const;
    void _shootFirework(ItemInstance const&, Player &)const;
};
