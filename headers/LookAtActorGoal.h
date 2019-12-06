#pragma once

class LookAtActorGoal : Goal {

public:
    virtual ~LookAtActorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void getFilter(void);
    void LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void _withinFieldOfView(Actor &);
};
