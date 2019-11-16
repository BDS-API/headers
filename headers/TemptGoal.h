#pragma once

class TemptGoal : Goal {

    virtual void Tempt~TemptGoal();
    virtual void Tempt~TemptGoal();
    virtual void TemptcanUse(void);
    virtual void TemptcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Temptstart(void);
    virtual void Temptstop(void);
    virtual void Tempttick(void);
    virtual void TemptappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
