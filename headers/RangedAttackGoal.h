#pragma once

class RangedAttackGoal : Goal {

    virtual void RangedAttack~RangedAttackGoal();
    virtual void RangedAttack~RangedAttackGoal();
    virtual void RangedAttackcanUse(void);
    virtual void RangedAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RangedAttackstart(void);
    virtual void RangedAttackstop(void);
    virtual void RangedAttacktick(void);
    virtual void RangedAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
