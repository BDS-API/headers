#pragma once

class SwellGoal : Goal {

    virtual void Swell~SwellGoal();
    virtual void Swell~SwellGoal();
    virtual void SwellcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Swellstart(void);
    virtual void Swellstop(void);
    virtual void Swelltick(void);
    virtual void SwellappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
