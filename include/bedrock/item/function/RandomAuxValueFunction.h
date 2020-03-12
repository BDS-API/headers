#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class RandomAuxValueFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~RandomAuxValueFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    RandomAuxValueFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
