#pragma once

class EmptyLootItem : LootPoolEntry {

    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual void ~EmptyLootItem();
    virtual void ~EmptyLootItem();
}
