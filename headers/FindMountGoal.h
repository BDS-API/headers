#pragma once

class FindMountGoal : Goal {

public:
    virtual ~FindMountGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void FindMountGoal(Mob &, float, int, bool, bool, float, int);
    bool isInMountRange(void);
    void getAttackReachSqr(void);
};
