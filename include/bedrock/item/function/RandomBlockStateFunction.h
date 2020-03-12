#pragma once

#include <string>
#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class RandomBlockStateFunction : LootItemFunction {

public:
    ~RandomBlockStateFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, std::string const&);
};
