#pragma once

class FollowCaravanGoal : Goal {

    virtual void FollowCaravan~FollowCaravanGoal();
    virtual void FollowCaravan~FollowCaravanGoal();
    virtual void FollowCaravancanUse(void);
    virtual void FollowCaravancanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FollowCaravanstart(void);
    virtual void FollowCaravanstop(void);
    virtual void FollowCaravantick(void);
    virtual void FollowCaravanappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
