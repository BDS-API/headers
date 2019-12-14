#pragma once

class BreatheAirGoal : Goal {

public:
    virtual ~BreatheAirGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void BreatheAirGoal(Mob &);
    void _determineApproximateDepth(void);
    void _findAirPosition(void);
};
