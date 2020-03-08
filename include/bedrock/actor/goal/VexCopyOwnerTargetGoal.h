#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
