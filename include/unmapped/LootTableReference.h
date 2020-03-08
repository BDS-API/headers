#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/item/condition/LootItemCondition"
#include "../bedrock/item/ItemStack"
#include "../json/Value"


class LootTableReference : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    virtual LootTableReference::~LootTableReference()

    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootTableReference(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::string);
};
