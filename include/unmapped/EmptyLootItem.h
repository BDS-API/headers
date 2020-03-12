#pragma once

#include "LootPoolEntry.h"
#include <vector>


class EmptyLootItem : LootPoolEntry {

public:
    virtual void _isExperimental()const;
    ~EmptyLootItem();
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    EmptyLootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
};
