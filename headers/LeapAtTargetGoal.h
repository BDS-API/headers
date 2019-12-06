#pragma once

class LeapAtTargetGoal : Goal {

public:
    virtual ~LeapAtTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void LeapAtTargetGoal(Mob &, float, bool);
};
