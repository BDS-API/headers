#pragma once

#include <string>
#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetItemNameFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~SetItemNameFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    SetItemNameFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
