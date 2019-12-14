#pragma once

class DragonHoldingPatternGoal : Goal {

public:
    virtual ~DragonHoldingPatternGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DragonHoldingPatternGoal(EnderDragon &);
    void findNewTarget(void);
};
