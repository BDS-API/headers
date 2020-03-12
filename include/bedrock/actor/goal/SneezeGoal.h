#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../../unmapped/MobDescriptor.h"


class SneezeGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~SneezeGoal();
    virtual bool canUse();
    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor> const&, float);
};
