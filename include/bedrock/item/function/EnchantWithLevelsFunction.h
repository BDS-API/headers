#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class EnchantWithLevelsFunction : public LootItemFunction {

public:
    virtual ~EnchantWithLevelsFunction(); // _ZN25EnchantWithLevelsFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN25EnchantWithLevelsFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN25EnchantWithLevelsFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN25EnchantWithLevelsFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    EnchantWithLevelsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, bool); // _ZN25EnchantWithLevelsFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBoundsb
};
