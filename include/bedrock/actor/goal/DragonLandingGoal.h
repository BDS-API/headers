#pragma once

class DragonLandingGoal : Goal {

public:
    virtual DragonLandingGoal::~DragonLandingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DragonLandingGoal(EnderDragon &);
    void findNewTarget(void);
    void navigateToNextPathNode(void);
};
