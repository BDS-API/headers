#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../../item/Item.h"
#include "../Mob.h"
#include "Goal.h"


class EatCarriedItemGoal : Goal {

public:
    static long EATING_TIME;
    static long CHEW_CHANCE;

    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _updateInventory(ItemStack const&);
    virtual void start();
    ~EatCarriedItemGoal();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void _getContainerItem();
    virtual void _canEatItem(Item const*)const;
    EatCarriedItemGoal(Mob &, int);
};
