#pragma once

class SilverfishWakeUpFriendsGoal : Goal {

public:
    virtual SilverfishWakeUpFriendsGoal::~SilverfishWakeUpFriendsGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SilverfishWakeUpFriendsGoal(Silverfish &);
};
