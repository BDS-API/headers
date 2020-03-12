#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class EnchantBookForTradingFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~EnchantBookForTradingFunction();
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    EnchantBookForTradingFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
};
