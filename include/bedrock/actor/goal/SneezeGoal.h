#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class SneezeGoal : Goal {

public:
    virtual SneezeGoal::~SneezeGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float);
};
