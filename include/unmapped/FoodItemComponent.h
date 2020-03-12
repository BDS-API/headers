#pragma once

#include <string>


class FoodItemComponent {

public:
    void _getCooldownTypeEnum(std::string const&)const;
    void getSaturationModifier()const;
    ~FoodItemComponent();
    void _loadEffects(Json::Value &);
    void _getActionEnum(std::string const&)const;
    FoodItemComponent(Item &);
    void getNutrition()const;
    void _applyEatEffects(ItemStack const&, Actor &, Level &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void init(Json::Value &);
    void use(ItemStack &, Player &);
    void useTimeDepleted(ItemStack &, Player &, Level &);
    void _applyOnUseAction(ItemStack const&, Actor &, Level &);
    void _loadRemoveEffects(Json::Value &);
    void eatItem(ItemStack &, Actor &, Level &);
    void getCoolDownType()const;
    void getCoolDownTime()const;
};
