#pragma once

#include <string>
#include "Goal.h"


class EatBlockGoal : Goal {

public:
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void stop();
    ~EatBlockGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    void getEatAnimationTick();
    EatBlockGoal(Mob &, DefinitionTrigger const&);
};
