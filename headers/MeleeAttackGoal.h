#pragma once

class MeleeAttackGoal : Goal {

    virtual void MeleeAttack~MeleeAttackGoal();
    virtual void MeleeAttack~MeleeAttackGoal();
    virtual void MeleeAttackcanUse(void);
    virtual void MeleeAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MeleeAttackstart(void);
    virtual void MeleeAttackstop(void);
    virtual void MeleeAttacktick(void);
    virtual void MeleeAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void MeleeAttack_getAttackReachSqr(void);
    virtual void MeleeAttack_lookAtTarget(Actor *)const;
    virtual void MeleeAttack_mobCanPathToTarget(Actor const*)const;
    virtual void MeleeAttack_shouldRecalculatePath(Actor const*);
    virtual void MeleeAttack_recalculateTargetPosition(Actor const*);
    virtual void MeleeAttack_adjustTimeToRecalculatePath(float);
    virtual void MeleeAttack_attemptPathToTarget(Actor *);
    virtual void MeleeAttack_attemptAttackTarget(Actor *);
}
