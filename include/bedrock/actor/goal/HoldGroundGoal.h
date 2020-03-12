#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>
#include "../../definition/DefinitionTrigger.h"


class HoldGroundGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~HoldGroundGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    HoldGroundGoal(Mob &, float, bool, float, DefinitionTrigger const&, DefinitionTrigger const&);
};
