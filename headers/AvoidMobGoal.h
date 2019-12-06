#pragma once

class AvoidMobGoal : Goal {

public:
    virtual ~AvoidMobGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void findNearestEntityToAvoid(float);

    void AvoidMobGoal(Mob &, float, float, float, float, float, bool);
};
