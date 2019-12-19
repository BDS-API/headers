#pragma once

class SquidFleeGoal : Goal {

public:
    virtual SquidFleeGoal::~SquidFleeGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SquidFleeGoal(Squid &);
};
