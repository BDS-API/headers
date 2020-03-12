#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class DefendVillageTargetGoal : TargetGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~DefendVillageTargetGoal();
    virtual void start();
    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
