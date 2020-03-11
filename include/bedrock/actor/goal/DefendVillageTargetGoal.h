#pragma once

#include <memory>
#include "./TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"
#include <string>


class DefendVillageTargetGoal : TargetGoal {

public:
    virtual ~DefendVillageTargetGoal();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
