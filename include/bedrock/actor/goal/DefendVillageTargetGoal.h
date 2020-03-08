#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class DefendVillageTargetGoal : TargetGoal {

public:
    DefendVillageTargetGoal::~DefendVillageTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    DefendVillageTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
};
