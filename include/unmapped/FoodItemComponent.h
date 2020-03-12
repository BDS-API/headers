#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"
#include <string>
#include "../bedrock/item/Item.h"
#include "../bedrock/util/BlockPos.h"
#include "../json/Value.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"


class FoodItemComponent {

public:
    void use(ItemStack &, Player &);
    ~FoodItemComponent();
    void _loadRemoveEffects(Json::Value &);
    void _applyOnUseAction(ItemStack const&, Actor &, Level &);
    void getCoolDownTime()const;
    void getCoolDownType()const;
    void _getActionEnum(std::string const&)const;
    void getNutrition()const;
    void _getCooldownTypeEnum(std::string const&)const;
    void useTimeDepleted(ItemStack &, Player &, Level &);
    void init(Json::Value &);
    FoodItemComponent(Item &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void eatItem(ItemStack &, Actor &, Level &);
    void _loadEffects(Json::Value &);
    void getSaturationModifier()const;
    void _applyEatEffects(ItemStack const&, Actor &, Level &);
};
