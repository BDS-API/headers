#pragma once

#include <string>
#include "Goal.h"


class EatCarriedItemGoal : Goal {

public:
    static long EATING_TIME;
    static long CHEW_CHANCE;

    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getContainerItem();
    virtual void start();
    ~EatCarriedItemGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void _updateInventory(ItemStack const&);
    virtual bool canUse();
    virtual void _canEatItem(Item const*)const;
    EatCarriedItemGoal(Mob &, int);
};
