#pragma once

class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    virtual ~LookAtTradingPlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
