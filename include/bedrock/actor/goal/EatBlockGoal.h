#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"


class EatBlockGoal : Goal {

public:
    virtual EatBlockGoal::~EatBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EatBlockGoal(Mob &, DefinitionTrigger const&);
    void getEatAnimationTick();
};
