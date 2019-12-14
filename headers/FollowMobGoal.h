#pragma once

class FollowMobGoal : Goal {

public:
    virtual ~FollowMobGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void FollowMobGoal(Mob &, float, float, int);
    void _setWantedMob(void);
};
