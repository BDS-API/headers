#pragma once

#include "../../../json/Value.h"
#include <memory>
#include "LootItemFunction.h"
#include <vector>


class SetItemLoreFunction : LootItemFunction {

public:
    ~SetItemLoreFunction(); // _ZN19SetItemLoreFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN19SetItemLoreFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN19SetItemLoreFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN19SetItemLoreFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetItemLoreFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector const&, std::allocator<std::char_traits<char>>); // _ZN19SetItemLoreFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERKS0_INSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISE_EE
};
