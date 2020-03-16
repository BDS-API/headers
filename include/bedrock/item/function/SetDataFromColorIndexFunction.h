#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class SetDataFromColorIndexFunction : public LootItemFunction {

public:
    virtual ~SetDataFromColorIndexFunction(); // _ZN29SetDataFromColorIndexFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN29SetDataFromColorIndexFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN29SetDataFromColorIndexFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN29SetDataFromColorIndexFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetDataFromColorIndexFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN29SetDataFromColorIndexFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
