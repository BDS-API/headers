#pragma once

class LootPoolEntry {

    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual void LootPoolEntry::~LootPoolEntry();
    virtual void LootPoolEntry::~LootPoolEntry();
}
