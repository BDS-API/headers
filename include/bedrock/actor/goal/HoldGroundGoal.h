#pragma once

#include <string>
#include "Goal.h"


class HoldGroundGoal : Goal {

public:
    virtual void tick();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~HoldGroundGoal();
    virtual void start();
    HoldGroundGoal(Mob &, float, bool, float, DefinitionTrigger const&, DefinitionTrigger const&);
};
