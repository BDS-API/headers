#pragma once

#include <string>
#include "Goal.h"


class FindCoverGoal : Goal {

public:
    virtual bool canContinueToUse();
    ~FindCoverGoal();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    FindCoverGoal(Mob &, float, float);
    void getMob()const;
    void getHidePos(Vec3 *)const;
};
