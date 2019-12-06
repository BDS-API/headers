#pragma once

class GoHomeGoal : Goal {

public:
    static long GoHomeGoal::GIVE_UP_TICKS;

    virtual ~GoHomeGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void GoHomeGoal(Mob &, float, int, float, DefinitionTrigger const&);
    void _getHomePos(void)const;
};
