#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SneezeGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    ~SneezeGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void start();
    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor> const&, float);
};
