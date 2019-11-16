#pragma once

class FindCoverGoal : Goal {

    virtual void FindCover~FindCoverGoal();
    virtual void FindCover~FindCoverGoal();
    virtual void FindCovercanUse(void);
    virtual void FindCovercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FindCoverstart(void);
    virtual void FindCoverstop(void);
    virtual void tick(void);
    virtual void FindCoverappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
