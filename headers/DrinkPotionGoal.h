#pragma once

class DrinkPotionGoal : Goal {

public:
    static long DrinkPotionGoal::THROTTLE_COOLDOWN;
    static long DrinkPotionGoal::SPEED_MODIFIER_DRINKING_UUID;

    virtual ~DrinkPotionGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData, std::allocator<DrinkPotionData>> const&);
    void _findPotionToUse(void)const;
    void _setUsingItem(bool);
    void _updateEquipment(ItemStack const&);
    void _isUsingItem(void)const;
};
