#pragma once

#include <string>
#include "Goal.h"


class RestrictOpenDoorGoal : Goal {

public:
    ~RestrictOpenDoorGoal();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void stop();
    RestrictOpenDoorGoal(Mob &);
};
