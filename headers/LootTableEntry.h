#pragma once

class LootTableEntry : LootPoolEntry {

    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual void ~LootTableEntry();
    virtual void ~LootTableEntry();
}
