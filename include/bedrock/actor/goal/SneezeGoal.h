#pragma once

#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class SneezeGoal : Goal {

public:
    virtual ~SneezeGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float);
};
