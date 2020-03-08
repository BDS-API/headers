#pragma once

#include "../bedrock/item/ItemStack"
#include "../json/Value"
#include "../bedrock/item/condition/LootItemCondition"
#include "../bedrock/util/Random"
#include "../bedrock/item/function/LootItemFunction"
#include "../bedrock/item/Item"


class LootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    LootItem::~LootItem()

    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootItem(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, Item const*, std::vector&<std::unique_ptr<LootItemFunction, std::default_delete<std::vector&>>, std::allocator<std::default_delete<std::vector&>>>);
};
