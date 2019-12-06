#pragma once

class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    virtual ~RandomLookAroundAndSitGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float);
    void _areMobConditionsMet(void);
    void _resetLook(void);
};
