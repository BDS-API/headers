#pragma once

class SleepGoal : MoveToPOIGoal {

public:
    virtual SleepGoal::~SleepGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getRepathTime(void)const;

    SleepGoal(Mob &, float, float, float, float, int, float);
    void _isCooldownFinished(void);
    void calcSleepPos(void);
    void findExitPos(void);
    void _safeToFit(int, Vec3 const&)const;
    void _wakeUp(void);
    void _resetCooldown(void);
    void lockPosToBedPos(void);
    void setSleepVariables(void);
    void _updateCooldown(void);
    void lockRot(void);
};
