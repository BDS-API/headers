#pragma once

#include "./Goal.h"
#include "../Silverfish.h"
#include <string>


class SilverfishWakeUpFriendsGoal : Goal {

public:
    virtual ~SilverfishWakeUpFriendsGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SilverfishWakeUpFriendsGoal(Silverfish &);
};
