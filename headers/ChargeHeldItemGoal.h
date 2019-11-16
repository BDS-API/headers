#pragma once

class ChargeHeldItemGoal : Goal {

    virtual void ChargeHeldItem~ChargeHeldItemGoal();
    virtual void ChargeHeldItem~ChargeHeldItemGoal();
    virtual void ChargeHeldItemcanUse(void);
    virtual void ChargeHeldItemcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ChargeHeldItemstart(void);
    virtual void ChargeHeldItemstop(void);
    virtual void ChargeHeldItemtick(void);
    virtual void ChargeHeldItemappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
