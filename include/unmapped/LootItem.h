#pragma once

#include "./LootPoolEntry.h"
#include "./LootTableContext.h"
#include "../bedrock/item/function/LootItemFunction.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include <vector>
#include "../bedrock/item/condition/LootItemCondition.h"
#include "../bedrock/item/Item.h"


class LootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    virtual ~LootItem();

    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootItem(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, Item const*, std::vector<std::unique_ptr<LootItemFunction, std::default_delete<std::vector &>>, std::allocator<std::default_delete<std::vector &>>> &);
};
