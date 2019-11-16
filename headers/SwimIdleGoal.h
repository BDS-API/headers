#pragma once

class SwimIdleGoal : Goal {

    virtual void SwimIdle~SwimIdleGoal();
    virtual void SwimIdle~SwimIdleGoal();
    virtual void SwimIdlecanUse(void);
    virtual void SwimIdlecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SwimIdlestart(void);
    virtual void stop(void);
    virtual void SwimIdletick(void);
    virtual void SwimIdleappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
