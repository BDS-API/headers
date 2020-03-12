#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TargetGoal : Goal {

public:
    virtual bool isTargetGoal()const;
    virtual void start();
    virtual bool canContinueToUse();
    ~TargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
    virtual void stop();
    void getFollowDistance()const;
    TargetGoal(Mob &, std::vector<MobDescriptor> const&, bool, int, bool, float, bool, int);
    void _withinRange(Actor const&);
    void _canReach(Actor &);
    void _canAttack(Actor *, bool, MobDescriptor const**);
};
