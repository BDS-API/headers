#pragma once

#include <memory>
#include "LootPoolEntry.h"
#include <vector>
#include "../json/Value.h"


class LootTableEntry : LootPoolEntry {

public:
    virtual void _isExperimental()const;
    ~LootTableEntry();
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootTableEntry(std::unique_ptr<LootTable>);
};
