#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class ExplorationMapFunction : LootItemFunction {

public:
    ~ExplorationMapFunction(); // _ZN22ExplorationMapFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN22ExplorationMapFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN22ExplorationMapFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22ExplorationMapFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    ExplorationMapFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22ExplorationMapFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
