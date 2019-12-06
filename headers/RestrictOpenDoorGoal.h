#pragma once

class RestrictOpenDoorGoal : Goal {

public:
    virtual ~RestrictOpenDoorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void RestrictOpenDoorGoal(Mob &);
};
