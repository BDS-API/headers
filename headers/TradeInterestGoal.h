#pragma once

class TradeInterestGoal : Goal {

public:
    virtual ~TradeInterestGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void TradeInterestGoal(Mob &, float, float, float, float, float);
    void _isLookingAtMe(Player const&)const;
    bool isRunning(void);
};
