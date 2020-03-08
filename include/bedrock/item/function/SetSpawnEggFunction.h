#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../condition/LootItemCondition"
#include "../../actor/unmapped/ActorDefinitionIdentifier"
#include "../ItemStack"
#include "../../../json/Value"


class SetSpawnEggFunction : LootItemFunction {

public:
    virtual SetSpawnEggFunction::~SetSpawnEggFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetSpawnEggFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, ActorDefinitionIdentifier const&);
};
