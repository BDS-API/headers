#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
