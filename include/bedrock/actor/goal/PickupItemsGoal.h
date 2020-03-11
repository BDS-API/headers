#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include "../../item/ItemStack.h"
#include <string>


class PickupItemsGoal : Goal {

public:
    virtual ~PickupItemsGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PickupItemsGoal(Mob &, float, bool, int, float);
    void _dropItem(ItemStack const&)const;
};
