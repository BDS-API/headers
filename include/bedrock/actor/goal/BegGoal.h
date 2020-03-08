#pragma once

#include "../Mob"
#include "../Player"
#include "../../item/unmapped/ItemDescriptor"


class BegGoal : Goal {

public:
    virtual BegGoal::~BegGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BegGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, int, int);
    void _playerHoldingInteresting(Player *);
};
