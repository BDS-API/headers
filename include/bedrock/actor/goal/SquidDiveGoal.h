#pragma once

#include "../Squid"


class SquidDiveGoal : Goal {

public:
    virtual SquidDiveGoal::~SquidDiveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SquidDiveGoal(Squid &);
};
