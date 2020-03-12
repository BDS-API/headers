#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class GoHomeGoal : Goal {

public:
    static long GIVE_UP_TICKS;

    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    ~GoHomeGoal();
    void _triggerOnFailedEvents();
    void _getHomeDimension()const;
    GoHomeGoal(Mob &, float, int, float, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>);
    void _getHomePos()const;
};
