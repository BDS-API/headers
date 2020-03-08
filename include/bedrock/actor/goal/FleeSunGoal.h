#pragma once

#include "../Mob"


class FleeSunGoal : FindCoverGoal {

public:
    FleeSunGoal::~FleeSunGoal()
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;

    FleeSunGoal(Mob &, float);
};
