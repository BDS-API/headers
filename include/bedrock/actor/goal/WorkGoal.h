#pragma once

#include "./MoveToPOIGoal.h"
#include "../Mob.h"
#include "../../definition/DefinitionTrigger.h"
#include <string>


class WorkGoal : MoveToPOIGoal {

public:
    static long RAIN_CHECK_MAX_COOLDOWN;

    virtual ~WorkGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    WorkGoal(Mob &, float, int, int, int, int, bool, int, DefinitionTrigger const&);
    void _updateCooldown();
    void _isInsideOrIsNotRaining();
    void _shouldTestForRainFallingOnPOI();
    void _tryResupplyTrades();
};
