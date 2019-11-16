#pragma once

class SwimWithMobGoal : Goal {

    virtual void SwimWithMob~SwimWithMobGoal();
    virtual void SwimWithMob~SwimWithMobGoal();
    virtual void SwimWithMobcanUse(void);
    virtual void SwimWithMobcanContinueToUse(void);
    virtual void SwimWithMobcanBeInterrupted(void);
    virtual void SwimWithMobstart(void);
    virtual void SwimWithMobstop(void);
    virtual void SwimWithMobtick(void);
    virtual void SwimWithMobappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
