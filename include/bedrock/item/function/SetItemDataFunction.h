#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetItemDataFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~SetItemDataFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetItemDataFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
};
