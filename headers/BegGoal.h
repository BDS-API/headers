#pragma once

class BegGoal : Goal {

    virtual void Beg~BegGoal();
    virtual void Beg~BegGoal();
    virtual void BegcanUse(void);
    virtual void BegcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Begstart(void);
    virtual void Begstop(void);
    virtual void Begtick(void);
    virtual void BegappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
