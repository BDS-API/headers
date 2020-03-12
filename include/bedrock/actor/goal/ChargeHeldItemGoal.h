#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class ChargeHeldItemGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canUse();
    virtual void stop();
    virtual void tick();
    virtual bool canContinueToUse();
    ~ChargeHeldItemGoal();
    void _isHoldingChargeableItem()const;
    ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor> const&);
};
