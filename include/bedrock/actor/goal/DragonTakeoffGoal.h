#pragma once

class DragonTakeoffGoal : Goal {

public:
    virtual DragonTakeoffGoal::~DragonTakeoffGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DragonTakeoffGoal(EnderDragon &);
    void findNewTarget(void);
    void navigateToNextPathNode(void);
};
