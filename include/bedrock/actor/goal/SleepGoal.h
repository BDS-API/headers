#pragma once

#include "../Mob"
#include "../../util/Vec3"


class SleepGoal : MoveToPOIGoal {

public:
    virtual SleepGoal::~SleepGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getRepathTime()const;

    SleepGoal(Mob &, float, float, float, float, int, float);
    void _isCooldownFinished();
    void calcSleepPos();
    void findExitPos();
    void _safeToFit(int, Vec3 const&)const;
    void _wakeUp();
    void _resetCooldown();
    void lockPosToBedPos();
    void setSleepVariables();
    void _updateCooldown();
    void lockRot();
};
