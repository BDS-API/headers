#pragma once

class GuardianAttackGoal : Goal {

    virtual void GuardianAttack~GuardianAttackGoal();
    virtual void GuardianAttack~GuardianAttackGoal();
    virtual void GuardianAttackcanUse(void);
    virtual void GuardianAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void GuardianAttackstart(void);
    virtual void GuardianAttackstop(void);
    virtual void GuardianAttacktick(void);
    virtual void GuardianAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
