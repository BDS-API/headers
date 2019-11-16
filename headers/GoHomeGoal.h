#pragma once

class GoHomeGoal : Goal {

    virtual void GoHome~GoHomeGoal();
    virtual void GoHome~GoHomeGoal();
    virtual void GoHomecanUse(void);
    virtual void GoHomecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void GoHomestart(void);
    virtual void GoHomestop(void);
    virtual void GoHometick(void);
    virtual void GoHomeappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
