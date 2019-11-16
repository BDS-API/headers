#pragma once

class NearestAttackableTargetGoal : TargetGoal {

    virtual void NearestAttackable~NearestAttackableTargetGoal();
    virtual void NearestAttackable~NearestAttackableTargetGoal();
    virtual void NearestAttackablecanUse(void);
    virtual void NearestAttackablecanContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void NearestAttackablestart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void NearestAttackableappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    virtual void NearestAttackable_findTarget(MobDescriptor const**);
}
