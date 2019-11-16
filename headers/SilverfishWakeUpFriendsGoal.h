#pragma once

class SilverfishWakeUpFriendsGoal : Goal {

    virtual void SilverfishWakeUpFriends~SilverfishWakeUpFriendsGoal();
    virtual void SilverfishWakeUpFriends~SilverfishWakeUpFriendsGoal();
    virtual void SilverfishWakeUpFriendscanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void SilverfishWakeUpFriendstick(void);
    virtual void SilverfishWakeUpFriendsappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
