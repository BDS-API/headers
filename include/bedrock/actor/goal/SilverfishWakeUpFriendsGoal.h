#pragma once

#include "../Silverfish"


class SilverfishWakeUpFriendsGoal : Goal {

public:
    virtual SilverfishWakeUpFriendsGoal::~SilverfishWakeUpFriendsGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SilverfishWakeUpFriendsGoal(Silverfish &);
};
