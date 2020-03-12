#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../Mob.h"
#include "Goal.h"
#include <vector>
#include "../../../unmapped/MobDescriptor.h"
#include <utility>


class ShareItemsGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void stop();
    ~ShareItemsGoal();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void start();
    ShareItemsGoal(Mob &, std::vector<MobDescriptor> const&, float, int, float);
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>> const&);
};
