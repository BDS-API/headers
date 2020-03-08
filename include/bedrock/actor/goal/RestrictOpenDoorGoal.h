#pragma once

#include "../Mob"


class RestrictOpenDoorGoal : Goal {

public:
    virtual RestrictOpenDoorGoal::~RestrictOpenDoorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    RestrictOpenDoorGoal(Mob &);
};
