#pragma once

#include <string>
#include "Goal.h"


class MakeLoveGoal : Goal {

public:
    ~MakeLoveGoal(); // _ZN12MakeLoveGoalD2Ev
    virtual bool canUse(); // _ZN12MakeLoveGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN12MakeLoveGoal16canContinueToUseEv
    virtual void start(); // _ZN12MakeLoveGoal5startEv
    virtual void stop(); // _ZN12MakeLoveGoal4stopEv
    virtual void tick(); // _ZN12MakeLoveGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK12MakeLoveGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MakeLoveGoal(VillagerBase &); // _ZN12MakeLoveGoalC2ER12VillagerBase
    void _findMate()const; // _ZNK12MakeLoveGoal9_findMateEv
    void _breed(VillagerBase &)const; // _ZNK12MakeLoveGoal6_breedER12VillagerBase
};
