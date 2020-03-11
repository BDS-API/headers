#pragma once

#include <memory>
#include "./Goal.h"
#include "../../item/ItemStack.h"
#include <vector>
#include "../Mob.h"
#include "../../../unmapped/DrinkPotionData.h"
#include <string>


class DrinkPotionGoal : Goal {

public:
    static long THROTTLE_COOLDOWN;
    static long SPEED_MODIFIER_DRINKING_UUID;

    virtual ~DrinkPotionGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData, std::allocator<DrinkPotionData>> const&);
    void _findPotionToUse()const;
    void _setUsingItem(bool);
    void _updateEquipment(ItemStack const&);
    void _isUsingItem()const;
};
