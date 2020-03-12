#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"


class DefendVillageTargetGoal : TargetGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    ~DefendVillageTargetGoal();
    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
