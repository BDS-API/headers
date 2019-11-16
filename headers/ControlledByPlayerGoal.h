#pragma once

class ControlledByPlayerGoal : Goal {

    virtual void ControlledByPlayer~ControlledByPlayerGoal();
    virtual void ControlledByPlayer~ControlledByPlayerGoal();
    virtual void ControlledByPlayercanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ControlledByPlayerstart(void);
    virtual void ControlledByPlayerstop(void);
    virtual void ControlledByPlayertick(void);
    virtual void ControlledByPlayerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
