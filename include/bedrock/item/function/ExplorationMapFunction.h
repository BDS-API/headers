#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class ExplorationMapFunction : LootItemFunction {

public:
    virtual ExplorationMapFunction::~ExplorationMapFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    ExplorationMapFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
