#pragma once

#include "../../util/Vec3.h"
#include "MoveToPOIGoal.h"
#include "../Mob.h"
#include <string>


class SleepGoal : MoveToPOIGoal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    ~SleepGoal();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual void _getRepathTime()const;
    virtual void appendDebugInfo(std::string &)const;
    void _wakeUp();
    SleepGoal(Mob &, float, float, float, float, int, float);
    void _updateCooldown();
    void calcSleepPos();
    void lockRot();
    void _resetCooldown();
    void _isCooldownFinished();
    void setSleepVariables();
    void lockPosToBedPos();
    void findExitPos();
    void _safeToFit(int, Vec3 const&)const;
};
