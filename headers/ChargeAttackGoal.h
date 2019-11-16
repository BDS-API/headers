#pragma once

class ChargeAttackGoal : Goal {

    virtual void ChargeAttack~ChargeAttackGoal();
    virtual void ChargeAttack~ChargeAttackGoal();
    virtual void ChargeAttackcanUse(void);
    virtual void ChargeAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ChargeAttackstart(void);
    virtual void ChargeAttackstop(void);
    virtual void ChargeAttacktick(void);
    virtual void ChargeAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
