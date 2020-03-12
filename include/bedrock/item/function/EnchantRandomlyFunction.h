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
#include "../../../unmapped/EnchantmentInstance.h"


class EnchantRandomlyFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~EnchantRandomlyFunction();
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    EnchantRandomlyFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector<EnchantmentInstance>, bool);
};
