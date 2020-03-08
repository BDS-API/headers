#pragma once

#include "../Mob"


class RestrictOpenDoorGoal : Goal {

public:
    virtual RestrictOpenDoorGoal::~RestrictOpenDoorGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    RestrictOpenDoorGoal(Mob &);
};
