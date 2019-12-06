#pragma once

class FindCoverGoal : Goal {

public:
    virtual ~FindCoverGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void FindCoverGoal(Mob &, float, float);
    void getHidePos(Vec3 *)const;
    void getMob(void)const;
};
