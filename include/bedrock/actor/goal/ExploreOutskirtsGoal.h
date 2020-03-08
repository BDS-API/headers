#pragma once

#include "../Mob"


class ExploreOutskirtsGoal : Goal {

public:
    virtual ExploreOutskirtsGoal::~ExploreOutskirtsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ExploreOutskirtsGoal(Mob &, float, float, int);
};
