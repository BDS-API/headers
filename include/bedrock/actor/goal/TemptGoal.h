#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../item/unmapped/ItemDescriptor.h"


class TemptGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void tick();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    ~TemptGoal();
    TemptGoal(Mob &, float, std::vector<ItemDescriptor> const&, bool, float, bool);
    bool isRunning();
};
