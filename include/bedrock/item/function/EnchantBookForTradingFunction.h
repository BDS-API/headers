#pragma once

#include "../condition/LootItemCondition.h"
#include "../ItemInstance.h"
#include "../../util/Random.h"
#include "../ItemStack.h"
#include "../../../unmapped/Trade.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class EnchantBookForTradingFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~EnchantBookForTradingFunction();
    EnchantBookForTradingFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
