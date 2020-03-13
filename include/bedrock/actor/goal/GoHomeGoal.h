#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class GoHomeGoal : Goal {

public:
    static long GIVE_UP_TICKS;

    ~GoHomeGoal(); // _ZN10GoHomeGoalD2Ev
    virtual bool canUse(); // _ZN10GoHomeGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN10GoHomeGoal16canContinueToUseEv
    virtual void start(); // _ZN10GoHomeGoal5startEv
    virtual void stop(); // _ZN10GoHomeGoal4stopEv
    virtual void tick(); // _ZN10GoHomeGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10GoHomeGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    GoHomeGoal(Mob &, float, int, float, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>); // _ZN10GoHomeGoalC2ER3MobfifSt6vectorI17DefinitionTriggerSaIS3_EES5_
    void _getHomeDimension()const; // _ZNK10GoHomeGoal17_getHomeDimensionEv
    void _getHomePos()const; // _ZNK10GoHomeGoal11_getHomePosEv
    void _triggerOnFailedEvents(); // _ZN10GoHomeGoal22_triggerOnFailedEventsEv
};
