#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../Mob.h"
#include "../../../unmapped/DrinkPotionData.h"
#include <vector>
#include "Goal.h"


class DrinkPotionGoal : Goal {

public:
    static long THROTTLE_COOLDOWN;
    static long SPEED_MODIFIER_DRINKING_UUID;

    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~DrinkPotionGoal();
    virtual bool canContinueToUse();
    void _findPotionToUse()const;
    void _isUsingItem()const;
    DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData> const&);
    void _setUsingItem(bool);
    void _updateEquipment(ItemStack const&);
};
