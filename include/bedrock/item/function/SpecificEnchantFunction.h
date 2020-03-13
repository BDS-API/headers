#pragma once

#include "../../../json/Value.h"
#include <memory>
#include "LootItemFunction.h"
#include <vector>


class SpecificEnchantFunction : LootItemFunction {

public:
    ~SpecificEnchantFunction(); // _ZN23SpecificEnchantFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN23SpecificEnchantFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN23SpecificEnchantFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN23SpecificEnchantFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SpecificEnchantFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector const&, std::allocator<std::vector const>); // _ZN23SpecificEnchantFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERKS0_INS_11EnchantInfoESaIS9_EE
};
