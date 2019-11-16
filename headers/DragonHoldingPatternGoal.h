#pragma once

class DragonHoldingPatternGoal : Goal {

    virtual void DragonHoldingPattern~DragonHoldingPatternGoal();
    virtual void DragonHoldingPattern~DragonHoldingPatternGoal();
    virtual void DragonHoldingPatterncanUse(void);
    virtual void DragonHoldingPatterncanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonHoldingPatternstart(void);
    virtual void DragonHoldingPatternstop(void);
    virtual void DragonHoldingPatterntick(void);
    virtual void DragonHoldingPatternappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
