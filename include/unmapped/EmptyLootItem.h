#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/item/condition/LootItemCondition"


class EmptyLootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual EmptyLootItem::~EmptyLootItem();

    EmptyLootItem(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
