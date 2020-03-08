#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/item/ItemStack"


class BoostableComponent {

public:
    static long SPEED_MODIFIER_BOOSTING_UUID;
    static long SPEED_MODIFIER_BOOSTING;


    BoostableComponent(BoostableComponent&&);
    BoostableComponent(void);
    void onItemInteract(Actor &, ItemStack &, Player &);
    void getIsBoosting()const;
    void _canUseItem(Actor &, ItemStack &);
    void boost(Actor &, Player &);
    void _useItem(Actor &, ItemStack &, Player &);
    void itemUseText(Player const&, std::string &);
    void setIsBoosting(bool);
    void removeRider(Player &);
    void getBoostTime()const;
    void setBoostTime(int);
    void getBoostTimeTotal()const;
    void getSpeedModifierBoosting();
};
