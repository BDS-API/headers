#pragma once

#include "../Mob"


class RestrictSunGoal : Goal {

public:
    virtual RestrictSunGoal::~RestrictSunGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    RestrictSunGoal(Mob &);
};
