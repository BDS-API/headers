#pragma once

#include "../Actor.h"
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class SwimWithMobGoal : Goal {

public:
    virtual ~SwimWithMobGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwimWithMobGoal(Mob &, float, float, int, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void _setWantedMob();
    void _canSwimWith(Actor &);
};
