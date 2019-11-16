#pragma once

class TargetWhenPushedGoal : Goal {

    virtual void TargetWhenPushed~TargetWhenPushedGoal();
    virtual void TargetWhenPushed~TargetWhenPushedGoal();
    virtual void TargetWhenPushedcanUse(void);
    virtual void TargetWhenPushedcanContinueToUse(void);
    virtual void TargetWhenPushedcanBeInterrupted(void);
    virtual void TargetWhenPushedstart(void);
    virtual void TargetWhenPushedstop(void);
    virtual void tick(void);
    virtual void TargetWhenPushedappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
