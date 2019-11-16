#pragma once

class OwnerHurtByTargetGoal : TargetGoal {

    virtual void OwnerHurtBy~OwnerHurtByTargetGoal();
    virtual void OwnerHurtBy~OwnerHurtByTargetGoal();
    virtual void OwnerHurtBycanUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void OwnerHurtBystart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
}
