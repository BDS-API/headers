#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/level/Level"
#include "../bedrock/item/Item"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/Player"
#include "../bedrock/util/Vec3"
#include "../bedrock/item/ItemStack"
#include "../json/Value"


class FoodItemComponent {

public:

    FoodItemComponent(Item &);
    void init(Json::Value &);
    void _getActionEnum(std::string const&)const;
    void _getCooldownTypeEnum(std::string const&)const;
    void _loadEffects(Json::Value &);
    void _loadRemoveEffects(Json::Value &);
    void getNutrition()const;
    void getSaturationModifier()const;
    void use(ItemStack &, Player &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void eatItem(ItemStack &, Actor &, Level &);
    void useTimeDepleted(ItemStack &, Player &, Level &);
    void _applyEatEffects(ItemStack const&, Actor &, Level &);
    void _applyOnUseAction(ItemStack const&, Actor &, Level &);
    void getCoolDownType()const;
    void getCoolDownTime()const;
};
