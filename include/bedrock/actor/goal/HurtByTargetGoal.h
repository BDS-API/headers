#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class HurtByTargetGoal : TargetGoal {

public:
    virtual void alertOther(Mob *, Mob *);
    virtual void appendDebugInfo(std::string &)const;
    ~HurtByTargetGoal();
    virtual bool canUse();
    virtual void start();
    HurtByTargetGoal(Mob &, std::vector<MobDescriptor> const&, bool);
};
