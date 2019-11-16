#pragma once

class RollGoal : Goal {

    virtual void Roll~RollGoal();
    virtual void Roll~RollGoal();
    virtual void RollcanUse(void);
    virtual void RollcanContinueToUse(void);
    virtual void RollcanBeInterrupted(void);
    virtual void Rollstart(void);
    virtual void Rollstop(void);
    virtual void Rolltick(void);
    virtual void RollappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
