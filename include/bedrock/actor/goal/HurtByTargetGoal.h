#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"


class HurtByTargetGoal : TargetGoal {

public:
    virtual bool canUse();
    ~HurtByTargetGoal();
    virtual void alertOther(Mob *, Mob *);
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    HurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&, bool);
};
