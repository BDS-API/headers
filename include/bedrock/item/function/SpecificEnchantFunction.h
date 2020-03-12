#pragma once

#include "../condition/LootItemCondition.h"
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class SpecificEnchantFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~SpecificEnchantFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SpecificEnchantFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector const&, std::allocator<std::vector const>);
};
