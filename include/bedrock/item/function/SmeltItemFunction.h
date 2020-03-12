#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SmeltItemFunction : LootItemFunction {

public:
    ~SmeltItemFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    SmeltItemFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
