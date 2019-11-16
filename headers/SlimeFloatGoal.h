#pragma once

class SlimeFloatGoal : Goal {

    virtual void SlimeFloat~SlimeFloatGoal();
    virtual void SlimeFloat~SlimeFloatGoal();
    virtual void SlimeFloatcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void SlimeFloattick(void);
    virtual void SlimeFloatappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
