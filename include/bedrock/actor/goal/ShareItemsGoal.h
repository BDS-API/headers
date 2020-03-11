#pragma once

#include <utility>
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include "../../item/ItemStack.h"
#include <vector>
#include "../Mob.h"
#include <string>


class ShareItemsGoal : Goal {

public:
    virtual ~ShareItemsGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ShareItemsGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, float);
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>, std::allocator<std::pair<int, ItemStack>>> const&);
};
