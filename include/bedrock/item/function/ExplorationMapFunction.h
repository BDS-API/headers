#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class ExplorationMapFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~ExplorationMapFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ExplorationMapFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
