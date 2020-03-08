#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class SetDataFromColorIndexFunction : LootItemFunction {

public:
    virtual SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetDataFromColorIndexFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
