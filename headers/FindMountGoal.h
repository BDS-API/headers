#pragma once

class FindMountGoal : Goal {

    virtual void FindMount~FindMountGoal();
    virtual void FindMount~FindMountGoal();
    virtual void FindMountcanUse(void);
    virtual void FindMountcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void FindMountstart(void);
    virtual void FindMountstop(void);
    virtual void FindMounttick(void);
    virtual void FindMountappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
