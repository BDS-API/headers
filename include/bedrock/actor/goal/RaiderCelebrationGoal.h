#pragma once

#include <string>
#include "../../../unmapped/FloatRange.h"
#include "Goal.h"


class RaiderCelebrationGoal : Goal {

public:
    ~RaiderCelebrationGoal(); // _ZN21RaiderCelebrationGoalD2Ev
    virtual bool canUse(); // _ZN21RaiderCelebrationGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN21RaiderCelebrationGoal16canContinueToUseEv
    virtual void start(); // _ZN21RaiderCelebrationGoal5startEv
    virtual void stop(); // _ZN21RaiderCelebrationGoal4stopEv
    virtual void tick(); // _ZN21RaiderCelebrationGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21RaiderCelebrationGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&); //TODO: incomplete function definition // _ZN21RaiderCelebrationGoalC2ER3Mob15LevelSoundEvent10FloatRangeS3_fRK17DefinitionTrigger
};
