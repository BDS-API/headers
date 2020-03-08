#pragma once

#include "../Squid"


class SquidOutOfWaterGoal : Goal {

public:
    virtual SquidOutOfWaterGoal::~SquidOutOfWaterGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidOutOfWaterGoal(Squid &);
};
