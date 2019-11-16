#pragma once

class SlimeKeepOnJumpingGoal : Goal {

    virtual void SlimeKeepOnJumping~SlimeKeepOnJumpingGoal();
    virtual void SlimeKeepOnJumping~SlimeKeepOnJumpingGoal();
    virtual void SlimeKeepOnJumpingcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void SlimeKeepOnJumpingtick(void);
    virtual void SlimeKeepOnJumpingappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
