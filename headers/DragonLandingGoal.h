#pragma once

class DragonLandingGoal : Goal {

public:
    virtual ~DragonLandingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DragonLandingGoal(EnderDragon &);
    void findNewTarget(void);
    void navigateToNextPathNode(void);
};
