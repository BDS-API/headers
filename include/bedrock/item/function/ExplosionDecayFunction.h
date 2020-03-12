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


class ExplosionDecayFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~ExplosionDecayFunction();
    ExplosionDecayFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
