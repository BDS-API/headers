#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../item/unmapped/ItemDescriptor.h"


class ChargeHeldItemGoal : Goal {

public:
    virtual void stop();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    ~ChargeHeldItemGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    void _isHoldingChargeableItem()const;
    ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor> const&);
};
