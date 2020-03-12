#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../definition/DefinitionTrigger.h"


class GoHomeGoal : Goal {

public:
    static long GIVE_UP_TICKS;

    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~GoHomeGoal();
    virtual void tick();
    virtual void stop();
    virtual bool canContinueToUse();
    void _getHomePos()const;
    void _getHomeDimension()const;
    GoHomeGoal(Mob &, float, int, float, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>);
    void _triggerOnFailedEvents();
};
