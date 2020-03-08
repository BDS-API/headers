#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../../item/ItemStack"
#include "../Mob"


class ShareItemsGoal : Goal {

public:
    ShareItemsGoal::~ShareItemsGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ShareItemsGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, float);
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>, std::allocator<std::pair<int, ItemStack>>> const&);
};
