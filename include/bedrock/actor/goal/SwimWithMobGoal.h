#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Actor"
#include "../Mob"


class SwimWithMobGoal : Goal {

public:
    SwimWithMobGoal::~SwimWithMobGoal()
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
