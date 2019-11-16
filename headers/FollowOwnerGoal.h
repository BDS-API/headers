#pragma once

class FollowOwnerGoal : Goal {

    virtual void FollowOwner~FollowOwnerGoal();
    virtual void FollowOwner~FollowOwnerGoal();
    virtual void FollowOwnercanUse(void);
    virtual void FollowOwnercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FollowOwnerstart(void);
    virtual void FollowOwnerstop(void);
    virtual void FollowOwnertick(void);
    virtual void FollowOwnerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void FollowOwneronPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
