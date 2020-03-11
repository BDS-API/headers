#pragma once

#include "../actor/Mob.h"
#include "./ItemStackBase.h"
#include "./ItemInstance.h"
#include "../level/Level.h"
#include "./RangedWeaponItem.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class CrossbowItem : RangedWeaponItem {

public:
    static long DEFAULT_USE_DURATION;

    virtual ~CrossbowItem();
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void getEnchantSlot()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual bool canBeCharged()const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;

    CrossbowItem(std::string const&, int);
    void _getMaxUseDuration(ItemStack const&)const;
    void _shootArrow(ItemInstance const&, ItemInstance const&, Player &)const;
    void _shootFirework(ItemInstance const&, Player &)const;
    void _getShootDir(Player const&, float)const;
};
