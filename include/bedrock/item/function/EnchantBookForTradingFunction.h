#pragma once

#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"
#include "../../../unmapped/Trade"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../ItemInstance"


class EnchantBookForTradingFunction : LootItemFunction {

public:
    EnchantBookForTradingFunction::~EnchantBookForTradingFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    EnchantBookForTradingFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
