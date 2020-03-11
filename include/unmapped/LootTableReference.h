#pragma once

#include "./LootPoolEntry.h"
#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include <vector>
#include "../bedrock/item/condition/LootItemCondition.h"
#include <string>


class LootTableReference : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    virtual ~LootTableReference();

    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootTableReference(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::string);
};
