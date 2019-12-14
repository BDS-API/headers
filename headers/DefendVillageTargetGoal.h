#pragma once

class DefendVillageTargetGoal : TargetGoal {

public:
    virtual ~DefendVillageTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
