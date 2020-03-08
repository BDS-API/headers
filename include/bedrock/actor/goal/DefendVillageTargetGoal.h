#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class DefendVillageTargetGoal : TargetGoal {

public:
    virtual DefendVillageTargetGoal::~DefendVillageTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
