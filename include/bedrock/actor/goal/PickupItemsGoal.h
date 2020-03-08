#pragma once

#include "../Mob"
#include "../../item/ItemStack"


class PickupItemsGoal : Goal {

public:
    virtual PickupItemsGoal::~PickupItemsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    PickupItemsGoal(Mob &, float, bool, int, float);
    void _dropItem(ItemStack const&)const;
};
