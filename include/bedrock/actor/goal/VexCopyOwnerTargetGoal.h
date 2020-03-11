#pragma once

#include <memory>
#include "./TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"
#include <string>


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual ~VexCopyOwnerTargetGoal();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
