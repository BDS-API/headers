#pragma once

class TradeWithPlayerGoal : Goal {

    virtual void TradeWithPlayer~TradeWithPlayerGoal();
    virtual void TradeWithPlayer~TradeWithPlayerGoal();
    virtual void TradeWithPlayercanUse(void);
    virtual void TradeWithPlayercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void TradeWithPlayerstart(void);
    virtual void TradeWithPlayerstop(void);
    virtual void tick(void);
    virtual void TradeWithPlayerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
