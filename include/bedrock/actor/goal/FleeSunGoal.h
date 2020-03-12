#pragma once

#include <string>
#include "FindCoverGoal.h"


class FleeSunGoal : FindCoverGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~FleeSunGoal();
    virtual bool canUse();
    FleeSunGoal(Mob &, float);
};
