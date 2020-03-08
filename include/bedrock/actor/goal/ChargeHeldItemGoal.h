#pragma once

#include "../Mob"
#include "../../item/unmapped/ItemDescriptor"


class ChargeHeldItemGoal : Goal {

public:
    virtual ChargeHeldItemGoal::~ChargeHeldItemGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&);
    void _isHoldingChargeableItem()const;
};
