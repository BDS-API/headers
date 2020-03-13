#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class SetItemCountFunction : LootItemFunction {

public:
    ~SetItemCountFunction(); // _ZN20SetItemCountFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN20SetItemCountFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN20SetItemCountFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN20SetItemCountFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetItemCountFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &); // _ZN20SetItemCountFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBounds
};
