#pragma once

class WitherDoNothingGoal : Goal {

public:
    virtual ~WitherDoNothingGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void WitherDoNothingGoal(WitherBoss &);
};
