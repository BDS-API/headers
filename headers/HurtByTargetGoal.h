#pragma once

class HurtByTargetGoal : TargetGoal {

    virtual void HurtBy~HurtByTargetGoal();
    virtual void HurtBy~HurtByTargetGoal();
    virtual void HurtBycanUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void HurtBystart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void HurtByappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    virtual void HurtByalertOther(Mob *, Mob *);
}
