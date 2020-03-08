#pragma once

#include "../Mob"


class RandomStrollGoal : Goal {

public:
    virtual RandomStrollGoal::~RandomStrollGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition(void);

    RandomStrollGoal(Mob &, float, int, int, int);
};
