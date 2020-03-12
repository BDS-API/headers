#pragma once

#include <string>


class BoostableComponent {

public:
    static long SPEED_MODIFIER_BOOSTING_UUID;
    static long SPEED_MODIFIER_BOOSTING;

    void setIsBoosting(bool);
    void getIsBoosting()const;
    void onItemInteract(Actor &, ItemStack &, Player &);
    BoostableComponent();
    void _canUseItem(Actor &, ItemStack &);
    void itemUseText(Player const&, std::string &);
    void _useItem(Actor &, ItemStack &, Player &);
    void getBoostTime()const;
    void getSpeedModifierBoosting();
    void boost(Actor &, Player &);
    void setBoostTime(int);
    BoostableComponent(BoostableComponent &&);
    void removeRider(Player &);
    void getBoostTimeTotal()const;
};
