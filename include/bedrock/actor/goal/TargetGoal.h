#pragma once

#include "../Actor.h"
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class TargetGoal : Goal {

public:
    virtual ~TargetGoal();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isTargetGoal()const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    TargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool, int, bool, float, bool, int);
    void _withinRange(Actor const&);
    void getFollowDistance()const;
    void _canAttack(Actor *, bool, MobDescriptor const**);
    void _canReach(Actor &);
};
