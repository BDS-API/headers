#pragma once

class ChargeHeldItemGoal : Goal {

public:
    virtual ~ChargeHeldItemGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&);
    void _isHoldingChargeableItem(void)const;
};
