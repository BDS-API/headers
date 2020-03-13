#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>
#include <string>


class RandomBlockStateFunction : LootItemFunction {

public:
    ~RandomBlockStateFunction(); // _ZN24RandomBlockStateFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN24RandomBlockStateFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN24RandomBlockStateFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, std::string const&); // _ZN24RandomBlockStateFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBoundsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN24RandomBlockStateFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
};
