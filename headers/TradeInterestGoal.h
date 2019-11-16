#pragma once

class TradeInterestGoal : Goal {

    virtual void TradeInterest~TradeInterestGoal();
    virtual void TradeInterest~TradeInterestGoal();
    virtual void TradeInterestcanUse(void);
    virtual void TradeInterestcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void TradeIntereststart(void);
    virtual void TradeIntereststop(void);
    virtual void TradeInteresttick(void);
    virtual void TradeInterestappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
