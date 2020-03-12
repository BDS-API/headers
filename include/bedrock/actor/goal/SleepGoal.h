#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class SleepGoal : MoveToPOIGoal {

public:
    ~SleepGoal();
    virtual void stop();
    virtual void _getRepathTime()const;
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    void setSleepVariables();
    void _resetCooldown();
    void _wakeUp();
    void findExitPos();
    void lockPosToBedPos();
    void lockRot();
    void _isCooldownFinished();
    void _updateCooldown();
    void calcSleepPos();
    void _safeToFit(int, Vec3 const&)const;
    SleepGoal(Mob &, float, float, float, float, int, float);
};
