#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>
#include <string>


class FillContainerFunction : LootItemFunction {

public:
    ~FillContainerFunction(); // _ZN21FillContainerFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN21FillContainerFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN21FillContainerFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN21FillContainerFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    FillContainerFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&); // _ZN21FillContainerFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
