#pragma once

#include "../Mob.h"
#include "./FindCoverGoal.h"
#include <string>


class FleeSunGoal : FindCoverGoal {

public:
    virtual ~FleeSunGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;

    FleeSunGoal(Mob &, float);
};
