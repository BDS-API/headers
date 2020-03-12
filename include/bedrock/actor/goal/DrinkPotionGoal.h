#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class DrinkPotionGoal : Goal {

public:
    static long THROTTLE_COOLDOWN;
    static long SPEED_MODIFIER_DRINKING_UUID;

    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~DrinkPotionGoal();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    void _setUsingItem(bool);
    void _isUsingItem()const;
    void _updateEquipment(ItemStack const&);
    DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData> const&);
    void _findPotionToUse()const;
};
