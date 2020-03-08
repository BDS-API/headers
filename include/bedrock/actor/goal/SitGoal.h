#pragma once

#include "../Mob"


class SitGoal : Goal {

public:
    virtual SitGoal::~SitGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    SitGoal(Mob &);
};
