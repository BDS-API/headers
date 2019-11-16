#pragma once

class SlimeAttackGoal : Goal {

    virtual void SlimeAttack~SlimeAttackGoal();
    virtual void SlimeAttack~SlimeAttackGoal();
    virtual void SlimeAttackcanUse(void);
    virtual void SlimeAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SlimeAttackstart(void);
    virtual void stop(void);
    virtual void SlimeAttacktick(void);
    virtual void SlimeAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
