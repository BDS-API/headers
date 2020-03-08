#pragma once

#include "../Squid"


class SquidDiveGoal : Goal {

public:
    virtual SquidDiveGoal::~SquidDiveGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidDiveGoal(Squid &);
};
