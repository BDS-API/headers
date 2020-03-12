#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~VexCopyOwnerTargetGoal();
    virtual void start();
    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor> const&);
};
