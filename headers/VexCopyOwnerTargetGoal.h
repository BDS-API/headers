#pragma once

class VexCopyOwnerTargetGoal : TargetGoal {

public:
    virtual ~VexCopyOwnerTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void VexCopyOwnerTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
