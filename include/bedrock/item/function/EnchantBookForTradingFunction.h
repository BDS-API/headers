#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class EnchantBookForTradingFunction : LootItemFunction {

public:
    ~EnchantBookForTradingFunction(); // _ZN29EnchantBookForTradingFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN29EnchantBookForTradingFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &); // _ZN29EnchantBookForTradingFunction5applyER9ItemStackR6RandomRK5TradeR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN29EnchantBookForTradingFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &); // _ZN29EnchantBookForTradingFunction5applyER12ItemInstanceR6RandomRK5TradeR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN29EnchantBookForTradingFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    EnchantBookForTradingFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN29EnchantBookForTradingFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
