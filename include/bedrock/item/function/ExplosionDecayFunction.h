#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class ExplosionDecayFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~ExplosionDecayFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    ExplosionDecayFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
};
