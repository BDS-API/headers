#pragma once

#include "../Mob"


class DefendVillageTargetGoal : TargetGoal {

public:
    virtual DefendVillageTargetGoal::~DefendVillageTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
