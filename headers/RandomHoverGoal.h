#pragma once

class RandomHoverGoal : Goal {

public:
    virtual ~RandomHoverGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void RandomHoverGoal(Mob &, float, int, float, float, float, IntRange);
    void _mobMeetsPreconditions(void)const;
    void _computeNewTarget(void);
    void _moveToTarget(void);
    void _findNewTarget(void)const;
};
