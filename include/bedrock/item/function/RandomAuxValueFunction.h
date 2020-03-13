#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class RandomAuxValueFunction : LootItemFunction {

public:
    ~RandomAuxValueFunction(); // _ZN22RandomAuxValueFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN22RandomAuxValueFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN22RandomAuxValueFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22RandomAuxValueFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    RandomAuxValueFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &); // _ZN22RandomAuxValueFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBounds
};
