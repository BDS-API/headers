#pragma once

class FloatWanderGoal : Goal {

    virtual void FloatWander~FloatWanderGoal();
    virtual void FloatWander~FloatWanderGoal();
    virtual void FloatWandercanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void FloatWandertick(void);
    virtual void FloatWanderappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
