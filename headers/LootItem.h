#pragma once

class LootItem : LootPoolEntry {

    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual void LootItem::~LootItem();
    virtual void LootItem::~LootItem();
}
