#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class LootingEnchantFunction : LootItemFunction {

public:
    ~LootingEnchantFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    LootingEnchantFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
