#pragma once

class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
