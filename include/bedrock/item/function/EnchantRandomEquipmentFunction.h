#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class EnchantRandomEquipmentFunction : public LootItemFunction {

public:
    virtual ~EnchantRandomEquipmentFunction(); // _ZN30EnchantRandomEquipmentFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN30EnchantRandomEquipmentFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN30EnchantRandomEquipmentFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN30EnchantRandomEquipmentFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    EnchantRandomEquipmentFunction(std::vector<std::unique_ptr<LootItemCondition>> &, float); // _ZN30EnchantRandomEquipmentFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EEf
};
