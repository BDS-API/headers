#pragma once

#include <string>
#include "Goal.h"


class PickupItemsGoal : Goal {

public:
    ~PickupItemsGoal();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void start();
    virtual bool canContinueToUse();
    virtual bool canUse();
    void _dropItem(ItemStack const&)const;
    PickupItemsGoal(Mob &, float, bool, int, float);
};
