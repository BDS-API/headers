#pragma once

class EndermanLeaveBlockGoal : Goal {

    virtual void EndermanLeaveBlock~EndermanLeaveBlockGoal();
    virtual void EndermanLeaveBlock~EndermanLeaveBlockGoal();
    virtual void EndermanLeaveBlockcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void EndermanLeaveBlocktick(void);
    virtual void EndermanLeaveBlockappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
