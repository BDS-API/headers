#pragma once

#include "../Mob"
#include "../../item/ItemStack"


class DrinkPotionGoal : Goal {

public:
    static long THROTTLE_COOLDOWN;
    static long SPEED_MODIFIER_DRINKING_UUID;

    virtual DrinkPotionGoal::~DrinkPotionGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData, std::allocator<DrinkPotionData>> const&);
    void _findPotionToUse(void)const;
    void _setUsingItem(bool);
    void _updateEquipment(ItemStack const&);
    void _isUsingItem(void)const;
};
