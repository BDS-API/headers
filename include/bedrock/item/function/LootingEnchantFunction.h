#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class LootingEnchantFunction : public LootItemFunction {

public:
    virtual ~LootingEnchantFunction(); // _ZN22LootingEnchantFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN22LootingEnchantFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN22LootingEnchantFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22LootingEnchantFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    LootingEnchantFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &); // _ZN22LootingEnchantFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBounds
};
