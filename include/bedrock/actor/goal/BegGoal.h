#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <memory>
#include "./Goal.h"
#include "../Player.h"
#include <vector>
#include "../Mob.h"
#include <string>


class BegGoal : Goal {

public:
    virtual ~BegGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BegGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, int, int);
    void _playerHoldingInteresting(Player *);
};
