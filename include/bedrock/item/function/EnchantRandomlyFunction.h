#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class EnchantRandomlyFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~EnchantRandomlyFunction();
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    EnchantRandomlyFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector<EnchantmentInstance>, bool);
};
