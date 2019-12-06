#pragma once

class RunAroundLikeCrazyGoal : Goal {

public:
    virtual ~RunAroundLikeCrazyGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void RunAroundLikeCrazyGoal(Mob &, float);
};
