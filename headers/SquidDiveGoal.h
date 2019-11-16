#pragma once

class SquidDiveGoal : Goal {

    virtual void SquidDive~SquidDiveGoal();
    virtual void SquidDive~SquidDiveGoal();
    virtual void SquidDivecanUse(void);
    virtual void SquidDivecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SquidDivestart(void);
    virtual void SquidDivestop(void);
    virtual void SquidDivetick(void);
    virtual void SquidDiveappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
