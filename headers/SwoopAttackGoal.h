#pragma once

class SwoopAttackGoal : Goal {

    virtual void SwoopAttack~SwoopAttackGoal();
    virtual void SwoopAttack~SwoopAttackGoal();
    virtual void SwoopAttackcanUse(void);
    virtual void SwoopAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SwoopAttackstart(void);
    virtual void SwoopAttackstop(void);
    virtual void SwoopAttacktick(void);
    virtual void SwoopAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
