#pragma once

#include "../../definition/DefinitionTrigger"
#include "../Mob"


class EatBlockGoal : Goal {

public:
    EatBlockGoal::~EatBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EatBlockGoal(Mob &, DefinitionTrigger const&);
    void getEatAnimationTick();
};
