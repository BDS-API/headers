#pragma once

#include "../condition/LootItemCondition.h"
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class SetSpawnEggFunction : LootItemFunction {

public:
    ~SetSpawnEggFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetSpawnEggFunction(std::vector<std::unique_ptr<LootItemCondition>> &, ActorDefinitionIdentifier const&);
};
