#pragma once

class FleeSunGoal : FindCoverGoal {

public:
    virtual ~FleeSunGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void FleeSunGoal(Mob &, float);
};
