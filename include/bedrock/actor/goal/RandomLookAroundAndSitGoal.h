#pragma once

#include "RandomLookAroundGoal.h"
#include <string>


class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    ~RandomLookAroundAndSitGoal(); // _ZN26RandomLookAroundAndSitGoalD2Ev
    virtual bool canUse(); // _ZN26RandomLookAroundAndSitGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN26RandomLookAroundAndSitGoal16canContinueToUseEv
    virtual void start(); // _ZN26RandomLookAroundAndSitGoal5startEv
    virtual void stop(); // _ZN26RandomLookAroundAndSitGoal4stopEv
    virtual void tick(); // _ZN26RandomLookAroundAndSitGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK26RandomLookAroundAndSitGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float); // _ZN26RandomLookAroundAndSitGoalC2ER3Mobiiiif
    void _areMobConditionsMet(); // _ZN26RandomLookAroundAndSitGoal20_areMobConditionsMetEv
    void _resetLook(); // _ZN26RandomLookAroundAndSitGoal10_resetLookEv
};
