#pragma once

class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

    virtual void ~DefendTrustedTargetGoal();
    virtual void ~DefendTrustedTargetGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void start(void);
    virtual void TargetGoal::stop(void);
    virtual void TargetGoal::tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void TargetGoal::isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void TargetGoal::_canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    virtual void _findTarget(MobDescriptor const**);
}
