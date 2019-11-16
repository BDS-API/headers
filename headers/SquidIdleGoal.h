#pragma once

class SquidIdleGoal : Goal {

    virtual void SquidIdle~SquidIdleGoal();
    virtual void SquidIdle~SquidIdleGoal();
    virtual void SquidIdlecanUse(void);
    virtual void SquidIdlecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SquidIdlestart(void);
    virtual void SquidIdlestop(void);
    virtual void SquidIdletick(void);
    virtual void SquidIdleappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
