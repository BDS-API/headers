#pragma once

#include "../../item/Item.h"
#include "./Goal.h"
#include "../../item/ItemStack.h"
#include "../Mob.h"
#include <string>


class EatCarriedItemGoal : Goal {

public:
    static long EATING_TIME;
    static long CHEW_CHANCE;

    virtual ~EatCarriedItemGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _updateInventory(ItemStack const&);
    virtual void _canEatItem(Item const*)const;
    virtual void _getContainerItem();

    EatCarriedItemGoal(Mob &, int);
};
