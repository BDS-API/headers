#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetDataFromColorIndexFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~SetDataFromColorIndexFunction();
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetDataFromColorIndexFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
};
