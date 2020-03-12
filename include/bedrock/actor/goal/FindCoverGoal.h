#pragma once

#include "../../util/Vec3.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class FindCoverGoal : Goal {

public:
    virtual void start();
    ~FindCoverGoal();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    void getHidePos(Vec3 *)const;
    FindCoverGoal(Mob &, float, float);
    void getMob()const;
};
