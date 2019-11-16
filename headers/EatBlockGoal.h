#pragma once

class EatBlockGoal : Goal {

    virtual void EatBlock~EatBlockGoal();
    virtual void EatBlock~EatBlockGoal();
    virtual void EatBlockcanUse(void);
    virtual void EatBlockcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void EatBlockstart(void);
    virtual void EatBlockstop(void);
    virtual void EatBlocktick(void);
    virtual void EatBlockappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
