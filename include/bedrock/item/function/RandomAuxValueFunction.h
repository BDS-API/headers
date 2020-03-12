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


class RandomAuxValueFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~RandomAuxValueFunction();
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    RandomAuxValueFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &);
};
