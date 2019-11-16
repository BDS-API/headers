#pragma once

class FleeSunGoal : FindCoverGoal {

    virtual void ~FleeSunGoal();
    virtual void ~FleeSunGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void Goal::tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void Goal::isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
