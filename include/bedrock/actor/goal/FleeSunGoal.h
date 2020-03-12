#pragma once

#include "FindCoverGoal.h"
#include "../Mob.h"
#include <string>


class FleeSunGoal : FindCoverGoal {

public:
    ~FleeSunGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    FleeSunGoal(Mob &, float);
};
