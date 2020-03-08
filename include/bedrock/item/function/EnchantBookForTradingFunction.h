#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../../../unmapped/Trade"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class EnchantBookForTradingFunction : LootItemFunction {

public:
    virtual EnchantBookForTradingFunction::~EnchantBookForTradingFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    EnchantBookForTradingFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
