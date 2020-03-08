#pragma once

#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../ItemInstance"


class SmeltItemFunction : LootItemFunction {

public:
    SmeltItemFunction::~SmeltItemFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SmeltItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
