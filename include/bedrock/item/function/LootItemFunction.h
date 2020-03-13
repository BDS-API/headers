#pragma once

#include "../../../json/Value.h"
#include <vector>


class LootItemFunction {

public:
    static long mLootingFunctions;

    ~LootItemFunction(); // _ZN16LootItemFunctionD2Ev
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &); // _ZN16LootItemFunction5applyER9ItemStackR6RandomRK5TradeR16LootTableContext
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &); // _ZN16LootItemFunction5applyER12ItemInstanceR6RandomRK5TradeR16LootTableContext
    void getConditions()const; // _ZNK16LootItemFunction13getConditionsEv
    void deserialize(Json::Value); // _ZN16LootItemFunction11deserializeEN4Json5ValueE
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN16LootItemFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
