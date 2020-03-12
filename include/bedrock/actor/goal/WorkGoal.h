#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class WorkGoal : MoveToPOIGoal {

public:
    static long RAIN_CHECK_MAX_COOLDOWN;

    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~WorkGoal();
    virtual void stop();
    virtual bool canUse();
    virtual void tick();
    void _isInsideOrIsNotRaining();
    WorkGoal(Mob &, float, int, int, int, int, bool, int, DefinitionTrigger const&);
    void _updateCooldown();
    void _tryResupplyTrades();
    void _shouldTestForRainFallingOnPOI();
};
