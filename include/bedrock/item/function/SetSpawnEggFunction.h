#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetSpawnEggFunction : LootItemFunction {

public:
    ~SetSpawnEggFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    SetSpawnEggFunction(std::vector<std::unique_ptr<LootItemCondition>> &, ActorDefinitionIdentifier const&);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
