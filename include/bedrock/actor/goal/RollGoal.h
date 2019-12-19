#pragma once

class RollGoal : Goal {

public:
    virtual RollGoal::~RollGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    RollGoal(Mob &, float);
    void _checkForDamagingBlocks(void)const;
    void _handleRoll(int, Vec3 &, float &, float &)const;
};
