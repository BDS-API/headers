#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class WorkGoal : MoveToPOIGoal {

public:
    static long RAIN_CHECK_MAX_COOLDOWN;

    ~WorkGoal(); // _ZN8WorkGoalD2Ev
    virtual bool canUse(); // _ZN8WorkGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN8WorkGoal16canContinueToUseEv
    virtual void start(); // _ZN8WorkGoal5startEv
    virtual void stop(); // _ZN8WorkGoal4stopEv
    virtual void tick(); // _ZN8WorkGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK8WorkGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    WorkGoal(Mob &, float, int, int, int, int, bool, int, DefinitionTrigger const&); // _ZN8WorkGoalC2ER3MobfiiiibiRK17DefinitionTrigger
    void _updateCooldown(); // _ZN8WorkGoal15_updateCooldownEv
    void _isInsideOrIsNotRaining(); // _ZN8WorkGoal23_isInsideOrIsNotRainingEv
    void _shouldTestForRainFallingOnPOI(); // _ZN8WorkGoal30_shouldTestForRainFallingOnPOIEv
    void _tryResupplyTrades(); // _ZN8WorkGoal18_tryResupplyTradesEv
};
