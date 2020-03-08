#pragma once

#include "../Actor"
#include "../EnderDragon"


class DragonStrafePlayerGoal : Goal {

public:
    static long FIREBALL_CHARGE_AMOUNT;

    virtual DragonStrafePlayerGoal::~DragonStrafePlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DragonStrafePlayerGoal(EnderDragon &);
    void setTarget(Actor *);
    void findNewTarget(void);
    void navigateToNextPathNode(void);
};
