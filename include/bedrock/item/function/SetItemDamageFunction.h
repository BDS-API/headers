#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class SetItemDamageFunction : LootItemFunction {

public:
    ~SetItemDamageFunction(); // _ZN21SetItemDamageFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN21SetItemDamageFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN21SetItemDamageFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN21SetItemDamageFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetItemDamageFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &); // _ZN21SetItemDamageFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER17RandomValueBounds
};
