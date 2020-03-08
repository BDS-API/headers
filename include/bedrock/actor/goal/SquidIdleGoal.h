#pragma once

#include "../Squid"


class SquidIdleGoal : Goal {

public:
    virtual SquidIdleGoal::~SquidIdleGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidIdleGoal(Squid &);
};
