#pragma once

class SwimWanderGoal : Goal {

public:
    virtual ~SwimWanderGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SwimWanderGoal(Mob &, float, float, int);
    void _setWantedPosition(void);
    void wanderComplete(void);
};
