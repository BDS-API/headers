#pragma once

#include "../Mob"
#include "../../item/ItemStack"


class PickupItemsGoal : Goal {

public:
    virtual PickupItemsGoal::~PickupItemsGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PickupItemsGoal(Mob &, float, bool, int, float);
    void _dropItem(ItemStack const&)const;
};
