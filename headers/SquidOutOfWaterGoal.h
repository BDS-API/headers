#pragma once

class SquidOutOfWaterGoal : Goal {

    virtual void SquidOutOfWater~SquidOutOfWaterGoal();
    virtual void SquidOutOfWater~SquidOutOfWaterGoal();
    virtual void SquidOutOfWatercanUse(void);
    virtual void SquidOutOfWatercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SquidOutOfWaterstart(void);
    virtual void SquidOutOfWaterstop(void);
    virtual void SquidOutOfWatertick(void);
    virtual void SquidOutOfWaterappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
