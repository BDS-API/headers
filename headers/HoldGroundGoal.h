#pragma once

class HoldGroundGoal : Goal {

    virtual void HoldGround~HoldGroundGoal();
    virtual void HoldGround~HoldGroundGoal();
    virtual void HoldGroundcanUse(void);
    virtual void HoldGroundcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void HoldGroundstart(void);
    virtual void HoldGroundstop(void);
    virtual void HoldGroundtick(void);
    virtual void HoldGroundappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
