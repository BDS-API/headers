#pragma once

#include "../Squid"


class SquidIdleGoal : Goal {

public:
    virtual SquidIdleGoal::~SquidIdleGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SquidIdleGoal(Squid &);
};
