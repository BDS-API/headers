#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RestrictOpenDoorGoal : Goal {

public:
    virtual ~RestrictOpenDoorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    RestrictOpenDoorGoal(Mob &);
};
