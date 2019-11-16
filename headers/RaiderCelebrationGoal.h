#pragma once

class RaiderCelebrationGoal : Goal {

    virtual void RaiderCelebration~RaiderCelebrationGoal();
    virtual void RaiderCelebration~RaiderCelebrationGoal();
    virtual void RaiderCelebrationcanUse(void);
    virtual void RaiderCelebrationcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RaiderCelebrationstart(void);
    virtual void RaiderCelebrationstop(void);
    virtual void RaiderCelebrationtick(void);
    virtual void RaiderCelebrationappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
