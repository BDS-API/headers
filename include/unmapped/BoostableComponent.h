#pragma once

#include <string>


class BoostableComponent {

public:
    static long SPEED_MODIFIER_BOOSTING_UUID;
    static long SPEED_MODIFIER_BOOSTING;

    BoostableComponent(BoostableComponent &&); // _ZN18BoostableComponentC2EOS_
    BoostableComponent(); // _ZN18BoostableComponentC2Ev
    void onItemInteract(Actor &, ItemStack &, Player &); // _ZN18BoostableComponent14onItemInteractER5ActorR9ItemStackR6Player
    void getIsBoosting()const; // _ZNK18BoostableComponent13getIsBoostingEv
    void _canUseItem(Actor &, ItemStack &); // _ZN18BoostableComponent11_canUseItemER5ActorR9ItemStack
    void boost(Actor &, Player &); // _ZN18BoostableComponent5boostER5ActorR6Player
    void _useItem(Actor &, ItemStack &, Player &); // _ZN18BoostableComponent8_useItemER5ActorR9ItemStackR6Player
    void itemUseText(Player const&, std::string &); // _ZN18BoostableComponent11itemUseTextERK6PlayerRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setIsBoosting(bool); // _ZN18BoostableComponent13setIsBoostingEb
    void removeRider(Player &); // _ZN18BoostableComponent11removeRiderER6Player
    void getBoostTime()const; // _ZNK18BoostableComponent12getBoostTimeEv
    void setBoostTime(int); // _ZN18BoostableComponent12setBoostTimeEi
    void getBoostTimeTotal()const; // _ZNK18BoostableComponent17getBoostTimeTotalEv
    void getSpeedModifierBoosting(); // _ZN18BoostableComponent24getSpeedModifierBoostingEv
};
