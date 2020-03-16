#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class SmeltItemFunction : public LootItemFunction {

public:
    virtual ~SmeltItemFunction(); // _ZN17SmeltItemFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN17SmeltItemFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN17SmeltItemFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN17SmeltItemFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SmeltItemFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN17SmeltItemFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
