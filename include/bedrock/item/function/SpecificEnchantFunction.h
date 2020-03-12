#pragma once

#include <memory>
#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SpecificEnchantFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~SpecificEnchantFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    SpecificEnchantFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector const&, std::allocator<std::vector const>);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
