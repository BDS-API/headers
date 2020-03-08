#pragma once

#include "../Squid"


class SquidFleeGoal : Goal {

public:
    virtual SquidFleeGoal::~SquidFleeGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidFleeGoal(Squid &);
};
