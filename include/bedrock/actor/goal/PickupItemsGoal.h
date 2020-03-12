#pragma once

#include "../../item/ItemStack.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class PickupItemsGoal : Goal {

public:
    ~PickupItemsGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual void stop();
    PickupItemsGoal(Mob &, float, bool, int, float);
    void _dropItem(ItemStack const&)const;
};
