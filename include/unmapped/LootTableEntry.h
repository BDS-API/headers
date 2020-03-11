#pragma once

#include "./LootPoolEntry.h"
#include "./LootTable.h"
#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include <vector>


class LootTableEntry : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    virtual ~LootTableEntry();

    void deserialize(Json::Value);
    LootTableEntry(std::unique_ptr<LootTable, std::default_delete<LootTable>>);
};
