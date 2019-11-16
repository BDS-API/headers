#pragma once

class FollowFlockGoal : Goal {

    virtual void FollowFlock~FollowFlockGoal();
    virtual void FollowFlock~FollowFlockGoal();
    virtual void FollowFlockcanUse(void);
    virtual void FollowFlockcanContinueToUse(void);
    virtual void FollowFlockcanBeInterrupted(void);
    virtual void FollowFlockstart(void);
    virtual void FollowFlockstop(void);
    virtual void FollowFlocktick(void);
    virtual void FollowFlockappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
