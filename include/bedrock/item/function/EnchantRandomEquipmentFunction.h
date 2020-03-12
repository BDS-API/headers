#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class EnchantRandomEquipmentFunction : LootItemFunction {

public:
    ~EnchantRandomEquipmentFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    EnchantRandomEquipmentFunction(std::vector<std::unique_ptr<LootItemCondition>> &, float);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
