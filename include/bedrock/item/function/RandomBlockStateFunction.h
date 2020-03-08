#pragma once

#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../../../unmapped/RandomValueBounds"
#include "../ItemInstance"


class RandomBlockStateFunction : LootItemFunction {

public:
    RandomBlockStateFunction::~RandomBlockStateFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &, std::string const&);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
