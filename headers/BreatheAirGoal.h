#pragma once

class BreatheAirGoal : Goal {

public:
    virtual ~BreatheAirGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void BreatheAirGoal(Mob &);
    void _determineApproximateDepth(void);
    void _findAirPosition(void);
};
