#pragma once

#include "LootItemFunction.h"
#include <string>
#include "../../../json/Value.h"
#include <vector>


class SetItemNameFunction : public LootItemFunction {

public:
    virtual ~SetItemNameFunction(); // _ZN19SetItemNameFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN19SetItemNameFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN19SetItemNameFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN19SetItemNameFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetItemNameFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&); // _ZN19SetItemNameFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
