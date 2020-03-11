#pragma once

#include <memory>
#include "./TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"
#include <string>


class HurtByTargetGoal : TargetGoal {

public:
    virtual ~HurtByTargetGoal();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void alertOther(Mob *, Mob *);

    HurtByTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool);
};
