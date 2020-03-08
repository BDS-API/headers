#pragma once

#include "../../item/ItemStack"
#include "../Mob"


class PickupItemsGoal : Goal {

public:
    PickupItemsGoal::~PickupItemsGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PickupItemsGoal(Mob &, float, bool, int, float);
    void _dropItem(ItemStack const&)const;
};
