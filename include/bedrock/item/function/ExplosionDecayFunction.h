#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class ExplosionDecayFunction : public LootItemFunction {

public:
    virtual ~ExplosionDecayFunction(); // _ZN22ExplosionDecayFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN22ExplosionDecayFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN22ExplosionDecayFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22ExplosionDecayFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    ExplosionDecayFunction(std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN22ExplosionDecayFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
