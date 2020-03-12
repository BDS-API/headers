#pragma once

#include <string>
#include "Goal.h"


class SilverfishWakeUpFriendsGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~SilverfishWakeUpFriendsGoal();
    virtual void tick();
    SilverfishWakeUpFriendsGoal(Silverfish &);
};
