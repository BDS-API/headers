#pragma once

#include <string>


class FoodItemComponent {

public:
    FoodItemComponent(Item &); // _ZN17FoodItemComponentC2ER4Item
    void init(Json::Value &); // _ZN17FoodItemComponent4initERN4Json5ValueE
    void _getActionEnum(std::string const&)const; // _ZNK17FoodItemComponent14_getActionEnumERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getCooldownTypeEnum(std::string const&)const; // _ZNK17FoodItemComponent20_getCooldownTypeEnumERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _loadEffects(Json::Value &); // _ZN17FoodItemComponent12_loadEffectsERN4Json5ValueE
    void _loadRemoveEffects(Json::Value &); // _ZN17FoodItemComponent18_loadRemoveEffectsERN4Json5ValueE
    void getNutrition()const; // _ZNK17FoodItemComponent12getNutritionEv
    void getSaturationModifier()const; // _ZNK17FoodItemComponent21getSaturationModifierEv
    void use(ItemStack &, Player &); // _ZN17FoodItemComponent3useER9ItemStackR6Player
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&); // _ZN17FoodItemComponent5useOnER9ItemStackR5ActorRK8BlockPoshRK4Vec3
    void eatItem(ItemStack &, Actor &, Level &); // _ZN17FoodItemComponent7eatItemER9ItemStackR5ActorR5Level
    void useTimeDepleted(ItemStack &, Player &, Level &); // _ZN17FoodItemComponent15useTimeDepletedER9ItemStackR6PlayerR5Level
    void _applyEatEffects(ItemStack const&, Actor &, Level &); // _ZN17FoodItemComponent16_applyEatEffectsERK9ItemStackR5ActorR5Level
    void _applyOnUseAction(ItemStack const&, Actor &, Level &); // _ZN17FoodItemComponent17_applyOnUseActionERK9ItemStackR5ActorR5Level
    void getCoolDownType()const; // _ZNK17FoodItemComponent15getCoolDownTypeEv
    void getCoolDownTime()const; // _ZNK17FoodItemComponent15getCoolDownTimeEv
    ~FoodItemComponent(); // _ZN17FoodItemComponentD2Ev
};
