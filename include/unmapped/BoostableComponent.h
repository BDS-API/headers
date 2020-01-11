#pragma once

class BoostableComponent {

public:
    static long SPEED_MODIFIER_BOOSTING_UUID;
    static long SPEED_MODIFIER_BOOSTING;


    BoostableComponent(BoostableComponent&&);
    BoostableComponent(void);
    void onItemInteract(Actor &, ItemStack &, Player &);
    void getIsBoosting(void)const;
    void _canUseItem(Actor &, ItemStack &);
    void boost(Actor &, Player &);
    void _useItem(Actor &, ItemStack &, Player &);
    void itemUseText(Player const&, std::string &);
    void setIsBoosting(bool);
    void removeRider(Player &);
    void getBoostTime(void)const;
    void setBoostTime(int);
    void getBoostTimeTotal(void)const;
    void getSpeedModifierBoosting(void);
};