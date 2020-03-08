#pragma once

#include "../Mob"


class FleeSunGoal : FindCoverGoal {

public:
    virtual FleeSunGoal::~FleeSunGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::string &)const;

    FleeSunGoal(Mob &, float);
};
