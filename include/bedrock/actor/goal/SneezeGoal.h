#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class SneezeGoal : Goal {

public:
    SneezeGoal::~SneezeGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float);
};
