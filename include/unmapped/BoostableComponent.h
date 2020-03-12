#pragma once

#include "../bedrock/actor/Player.h"
#include <string>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"


class BoostableComponent {

public:
    static long SPEED_MODIFIER_BOOSTING_UUID;
    static long SPEED_MODIFIER_BOOSTING;

    void getBoostTime()const;
    void _canUseItem(Actor &, ItemStack &);
    void removeRider(Player &);
    BoostableComponent(BoostableComponent &&);
    void getBoostTimeTotal()const;
    BoostableComponent();
    void boost(Actor &, Player &);
    void _useItem(Actor &, ItemStack &, Player &);
    void setBoostTime(int);
    void itemUseText(Player const&, std::string &);
    void onItemInteract(Actor &, ItemStack &, Player &);
    void getSpeedModifierBoosting();
    void getIsBoosting()const;
    void setIsBoosting(bool);
};
