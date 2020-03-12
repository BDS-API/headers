#pragma once

#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../../unmapped/MobDescriptor.h"


class TargetGoal : Goal {

public:
    virtual void stop();
    ~TargetGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isTargetGoal()const;
    virtual void start();
    virtual void tick();
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    void _withinRange(Actor const&);
    TargetGoal(Mob &, std::vector<MobDescriptor> const&, bool, int, bool, float, bool, int);
    void getFollowDistance()const;
    void _canAttack(Actor *, bool, MobDescriptor const**);
    void _canReach(Actor &);
};
