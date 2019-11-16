#pragma once

class FollowParentGoal : Goal {

    virtual void FollowParent~FollowParentGoal();
    virtual void FollowParent~FollowParentGoal();
    virtual void FollowParentcanUse(void);
    virtual void FollowParentcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FollowParentstart(void);
    virtual void FollowParentstop(void);
    virtual void FollowParenttick(void);
    virtual void FollowParentappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
