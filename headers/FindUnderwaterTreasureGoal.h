#pragma once

class FindUnderwaterTreasureGoal : Goal {

    virtual void FindUnderwaterTreasure~FindUnderwaterTreasureGoal();
    virtual void FindUnderwaterTreasure~FindUnderwaterTreasureGoal();
    virtual void FindUnderwaterTreasurecanUse(void);
    virtual void FindUnderwaterTreasurecanContinueToUse(void);
    virtual void FindUnderwaterTreasurecanBeInterrupted(void);
    virtual void FindUnderwaterTreasurestart(void);
    virtual void FindUnderwaterTreasurestop(void);
    virtual void FindUnderwaterTreasuretick(void);
    virtual void FindUnderwaterTreasureappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
