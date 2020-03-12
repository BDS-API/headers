#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class BegGoal : Goal {

public:
    virtual bool canUse();
    virtual void tick();
    virtual void start();
    ~BegGoal();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    void _playerHoldingInteresting(Player *);
    BegGoal(Mob &, std::vector<ItemDescriptor> const&, float, int, int);
};
