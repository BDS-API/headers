#pragma once

#include "../Mob"
#include "../../item/unmapped/ItemDescriptor"


class TemptGoal : Goal {

public:
    virtual TemptGoal::~TemptGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    TemptGoal(Mob &, float, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, bool, float, bool);
    bool isRunning();
};
