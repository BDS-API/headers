#pragma once

class WorkGoal : MoveToPOIGoal {

public:
    static long WorkGoal::RAIN_CHECK_MAX_COOLDOWN;

    virtual ~WorkGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void WorkGoal(Mob &, float, int, int, int, int, bool, int, DefinitionTrigger const&);
    void _updateCooldown(void);
    void _isInsideOrIsNotRaining(void);
    void _shouldTestForRainFallingOnPOI(void);
    void _tryResupplyTrades(void);
};
