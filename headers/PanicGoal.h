#pragma once

class PanicGoal : Goal {

    virtual void Panic~PanicGoal();
    virtual void Panic~PanicGoal();
    virtual void PaniccanUse(void);
    virtual void PaniccanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Panicstart(void);
    virtual void Panicstop(void);
    virtual void tick(void);
    virtual void PanicappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
