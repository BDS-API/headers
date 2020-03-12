#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class ShareItemsGoal : Goal {

public:
    ~ShareItemsGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void start();
    virtual bool canUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>> const&);
    ShareItemsGoal(Mob &, std::vector<MobDescriptor> const&, float, int, float);
};
