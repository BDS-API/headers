#pragma once

#include <string>
#include "../Player.h"
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../item/unmapped/ItemDescriptor.h"


class BegGoal : Goal {

public:
    virtual void stop();
    virtual void tick();
    virtual void start();
    virtual bool canContinueToUse();
    ~BegGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    void _playerHoldingInteresting(Player *);
    BegGoal(Mob &, std::vector<ItemDescriptor> const&, float, int, int);
};
