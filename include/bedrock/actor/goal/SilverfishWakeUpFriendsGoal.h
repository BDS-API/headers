#pragma once

#include "../Silverfish.h"
#include "Goal.h"
#include <string>


class SilverfishWakeUpFriendsGoal : Goal {

public:
    virtual bool canUse();
    virtual void tick();
    ~SilverfishWakeUpFriendsGoal();
    virtual void appendDebugInfo(std::string &)const;
    SilverfishWakeUpFriendsGoal(Silverfish &);
};
