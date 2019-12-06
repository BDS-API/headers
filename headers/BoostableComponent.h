#pragma once

class BoostableComponent {

public:
    static long BoostableComponent::SPEED_MODIFIER_BOOSTING_UUID;
    static long BoostableComponent::SPEED_MODIFIER_BOOSTING;


    void BoostableComponent(BoostableComponent&&);
    void BoostableComponent(void);
    void onItemInteract(Actor &, ItemStack &, Player &);
    void getIsBoosting(void)const;
    void _canUseItem(Actor &, ItemStack &);
    void boost(Actor &, Player &);
    void _useItem(Actor &, ItemStack &, Player &);
    void itemUseText(Player const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void setIsBoosting(bool);
    void removeRider(Player &);
    void getBoostTime(void)const;
    void setBoostTime(int);
    void getBoostTimeTotal(void)const;
    void getSpeedModifierBoosting(void);
};
