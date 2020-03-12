#pragma once

#include "../condition/LootItemCondition.h"
#include "../../../unmapped/RandomValueBounds.h"
#include <string>
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class RandomBlockStateFunction : LootItemFunction {

public:
    ~RandomBlockStateFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition>> &, RandomValueBounds &, std::string const&);
};
