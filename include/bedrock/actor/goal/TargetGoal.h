#pragma once

#include "../Mob"
#include "../Actor"
#include "../../../unmapped/MobDescriptor"


class TargetGoal : Goal {

public:
    virtual TargetGoal::~TargetGoal()
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
