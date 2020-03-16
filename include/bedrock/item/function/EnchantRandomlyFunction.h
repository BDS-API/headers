#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class EnchantRandomlyFunction : public LootItemFunction {

public:
    virtual ~EnchantRandomlyFunction(); // _ZN23EnchantRandomlyFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN23EnchantRandomlyFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN23EnchantRandomlyFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN23EnchantRandomlyFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    EnchantRandomlyFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector<EnchantmentInstance>, bool); // _ZN23EnchantRandomlyFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EES0_I19EnchantmentInstanceSaIS9_EEb
};
