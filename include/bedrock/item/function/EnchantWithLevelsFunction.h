#pragma once

#include "../condition/LootItemCondition.h"
#include "../../../unmapped/RandomValueBounds.h"
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class EnchantWithLevelsFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~EnchantWithLevelsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    EnchantWithLevelsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, bool);
};
