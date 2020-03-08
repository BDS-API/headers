#pragma once

#include "../EnderDragon"


class DragonHoldingPatternGoal : Goal {

public:
    virtual DragonHoldingPatternGoal::~DragonHoldingPatternGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DragonHoldingPatternGoal(EnderDragon &);
    void findNewTarget(void);
};
