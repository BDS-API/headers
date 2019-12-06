#pragma once

class RandomBreachingGoal : RandomStrollGoal {

public:
    virtual ~RandomBreachingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _setWantedPosition(void);

    void RandomBreachingGoal(Mob &, float, int, int, int, float);
};
