#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetItemCountFunction : LootItemFunction {

public:
    ~SetItemCountFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetItemCountFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
};
