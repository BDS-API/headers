#pragma once

#include "MoveToPOIGoal.h"
#include "../Mob.h"
#include <string>
#include "../../definition/DefinitionTrigger.h"


class WorkGoal : MoveToPOIGoal {

public:
    static long RAIN_CHECK_MAX_COOLDOWN;

    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~WorkGoal();
    virtual bool canContinueToUse();
    void _shouldTestForRainFallingOnPOI();
    void _updateCooldown();
    void _isInsideOrIsNotRaining();
    WorkGoal(Mob &, float, int, int, int, int, bool, int, DefinitionTrigger const&);
    void _tryResupplyTrades();
};
