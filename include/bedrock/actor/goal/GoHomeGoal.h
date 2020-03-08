#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"


class GoHomeGoal : Goal {

public:
    static long GIVE_UP_TICKS;

    virtual GoHomeGoal::~GoHomeGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    GoHomeGoal(Mob &, float, int, float, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>);
    void _getHomeDimension()const;
    void _getHomePos()const;
    void _triggerOnFailedEvents();
};
