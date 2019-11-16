#pragma once

class MoveTowardsRestrictionGoal : Goal {

    virtual void MoveTowardsRestriction~MoveTowardsRestrictionGoal();
    virtual void MoveTowardsRestriction~MoveTowardsRestrictionGoal();
    virtual void MoveTowardsRestrictioncanUse(void);
    virtual void MoveTowardsRestrictioncanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MoveTowardsRestrictionstart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void MoveTowardsRestrictionappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
