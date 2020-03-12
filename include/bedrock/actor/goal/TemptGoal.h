#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TemptGoal : Goal {

public:
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~TemptGoal();
    virtual void stop();
    virtual void start();
    virtual void tick();
    bool isRunning();
    TemptGoal(Mob &, float, std::vector<ItemDescriptor> const&, bool, float, bool);
};
