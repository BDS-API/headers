#pragma once

class FollowMobGoal : Goal {

    virtual void FollowMob~FollowMobGoal();
    virtual void FollowMob~FollowMobGoal();
    virtual void FollowMobcanUse(void);
    virtual void FollowMobcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FollowMobstart(void);
    virtual void FollowMobstop(void);
    virtual void FollowMobtick(void);
    virtual void FollowMobappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
