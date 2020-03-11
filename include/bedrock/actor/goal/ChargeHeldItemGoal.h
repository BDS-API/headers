#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <memory>
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class ChargeHeldItemGoal : Goal {

public:
    virtual ~ChargeHeldItemGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&);
    void _isHoldingChargeableItem()const;
};
