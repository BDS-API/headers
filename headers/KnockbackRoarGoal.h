#pragma once

class KnockbackRoarGoal : Goal {

    virtual void KnockbackRoar~KnockbackRoarGoal();
    virtual void KnockbackRoar~KnockbackRoarGoal();
    virtual void KnockbackRoarcanUse(void);
    virtual void KnockbackRoarcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void KnockbackRoarstart(void);
    virtual void KnockbackRoarstop(void);
    virtual void KnockbackRoartick(void);
    virtual void KnockbackRoarappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
