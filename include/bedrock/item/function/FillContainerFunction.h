#pragma once

#include <string>
#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class FillContainerFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~FillContainerFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    FillContainerFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&);
};
