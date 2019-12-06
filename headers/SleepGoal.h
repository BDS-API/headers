#pragma once

class SleepGoal : MoveToPOIGoal {

public:
    virtual ~SleepGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _getRepathTime(void)const;

    void SleepGoal(Mob &, float, float, float, float, int, float);
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
