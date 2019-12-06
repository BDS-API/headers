#pragma once

class LootTableEntry : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual ~LootTableEntry();

    void deserialize(Json::Value);
    void LootTableEntry(std::unique_ptr<LootTable, std::default_delete<LootTable>>);
};
