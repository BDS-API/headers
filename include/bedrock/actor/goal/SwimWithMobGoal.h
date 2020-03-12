#pragma once

#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../../unmapped/MobDescriptor.h"


class SwimWithMobGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    ~SwimWithMobGoal();
    virtual void tick();
    virtual void stop();
    void _canSwimWith(Actor &);
    SwimWithMobGoal(Mob &, float, float, int, std::vector<MobDescriptor> const&);
    void _setWantedMob();
};
