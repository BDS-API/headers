#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetItemDamageFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~SetItemDamageFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetItemDamageFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
};
