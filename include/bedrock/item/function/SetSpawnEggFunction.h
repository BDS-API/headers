#pragma once

#include "../../util/Random.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "./LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../ItemStack.h"
#include "../ItemInstance.h"


class SetSpawnEggFunction : LootItemFunction {

public:
    virtual ~SetSpawnEggFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetSpawnEggFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, ActorDefinitionIdentifier const&);
};
