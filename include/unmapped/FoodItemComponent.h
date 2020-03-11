#pragma once

#include "../bedrock/util/Vec3.h"
#include <string>
#include "../json/Value.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/item/Item.h"


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
    ~FoodItemComponent();
};
