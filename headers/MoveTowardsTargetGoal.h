#pragma once

class MoveTowardsTargetGoal : Goal {

    virtual void MoveTowardsTarget~MoveTowardsTargetGoal();
    virtual void MoveTowardsTarget~MoveTowardsTargetGoal();
    virtual void MoveTowardsTargetcanUse(void);
    virtual void MoveTowardsTargetcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MoveTowardsTargetstart(void);
    virtual void MoveTowardsTargetstop(void);
    virtual void tick(void);
    virtual void MoveTowardsTargetappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
