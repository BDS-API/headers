#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class EnchantWithLevelsFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~EnchantWithLevelsFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    EnchantWithLevelsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, bool);
};
