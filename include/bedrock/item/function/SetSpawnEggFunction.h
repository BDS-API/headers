#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class SetSpawnEggFunction : LootItemFunction {

public:
    ~SetSpawnEggFunction(); // _ZN19SetSpawnEggFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN19SetSpawnEggFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN19SetSpawnEggFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN19SetSpawnEggFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetSpawnEggFunction(std::vector<std::unique_ptr<LootItemCondition>> &, ActorDefinitionIdentifier const&); // _ZN19SetSpawnEggFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERK25ActorDefinitionIdentifier
};
