#pragma once

class LeapAtTargetGoal : Goal {

    virtual void LeapAtTarget~LeapAtTargetGoal();
    virtual void LeapAtTarget~LeapAtTargetGoal();
    virtual void LeapAtTargetcanUse(void);
    virtual void LeapAtTargetcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void LeapAtTargetstart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void LeapAtTargetappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
