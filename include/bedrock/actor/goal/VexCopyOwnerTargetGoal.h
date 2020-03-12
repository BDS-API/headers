#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual bool canUse();
    virtual void start();
    ~VexCopyOwnerTargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
