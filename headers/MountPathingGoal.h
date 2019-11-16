#pragma once

class MountPathingGoal : Goal {

    virtual void MountPathing~MountPathingGoal();
    virtual void MountPathing~MountPathingGoal();
    virtual void MountPathingcanUse(void);
    virtual void MountPathingcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MountPathingstart(void);
    virtual void MountPathingstop(void);
    virtual void MountPathingtick(void);
    virtual void MountPathingappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void MountPathing_getAttackReachSqr(void);
}
