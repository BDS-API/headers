#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class SleepGoal : MoveToPOIGoal {

public:
    ~SleepGoal(); // _ZN9SleepGoalD2Ev
    virtual bool canUse(); // _ZN9SleepGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN9SleepGoal16canContinueToUseEv
    virtual void start(); // _ZN9SleepGoal5startEv
    virtual void stop(); // _ZN9SleepGoal4stopEv
    virtual void tick(); // _ZN9SleepGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9SleepGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _getRepathTime()const; // _ZNK9SleepGoal14_getRepathTimeEv
    SleepGoal(Mob &, float, float, float, float, int, float); // _ZN9SleepGoalC2ER3Mobffffif
    void _isCooldownFinished(); // _ZN9SleepGoal19_isCooldownFinishedEv
    void calcSleepPos(); // _ZN9SleepGoal12calcSleepPosEv
    void findExitPos(); // _ZN9SleepGoal11findExitPosEv
    void _safeToFit(int, Vec3 const&)const; // _ZNK9SleepGoal10_safeToFitEiRK4Vec3
    void _wakeUp(); // _ZN9SleepGoal7_wakeUpEv
    void _resetCooldown(); // _ZN9SleepGoal14_resetCooldownEv
    void lockPosToBedPos(); // _ZN9SleepGoal15lockPosToBedPosEv
    void setSleepVariables(); // _ZN9SleepGoal17setSleepVariablesEv
    void _updateCooldown(); // _ZN9SleepGoal15_updateCooldownEv
    void lockRot(); // _ZN9SleepGoal7lockRotEv
};
