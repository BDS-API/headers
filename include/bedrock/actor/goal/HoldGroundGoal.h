#pragma once

#include "./Goal.h"
#include "../../definition/DefinitionTrigger.h"
#include "../Mob.h"
#include <string>


class HoldGroundGoal : Goal {

public:
    virtual ~HoldGroundGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    HoldGroundGoal(Mob &, float, bool, float, DefinitionTrigger const&, DefinitionTrigger const&);
};
