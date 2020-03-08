#pragma once

#include "../Mob"


class FollowMobGoal : Goal {

public:
    virtual FollowMobGoal::~FollowMobGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob(void);
};
