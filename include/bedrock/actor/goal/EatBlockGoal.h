#pragma once

#include "./Goal.h"
#include "../../definition/DefinitionTrigger.h"
#include "../Mob.h"
#include <string>


class EatBlockGoal : Goal {

public:
    virtual ~EatBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EatBlockGoal(Mob &, DefinitionTrigger const&);
    void getEatAnimationTick();
};
