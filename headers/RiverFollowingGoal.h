#pragma once

class RiverFollowingGoal : Goal {

    virtual void RiverFollowing~RiverFollowingGoal();
    virtual void RiverFollowing~RiverFollowingGoal();
    virtual void RiverFollowingcanUse(void);
    virtual void RiverFollowingcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RiverFollowingstart(void);
    virtual void RiverFollowingstop(void);
    virtual void RiverFollowingtick(void);
    virtual void RiverFollowingappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
