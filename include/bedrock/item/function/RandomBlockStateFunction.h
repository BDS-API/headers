#pragma once

#include "../../util/Random.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/RandomValueBounds.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "./LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <string>


class RandomBlockStateFunction : LootItemFunction {

public:
    virtual ~RandomBlockStateFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &, std::string const&);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
