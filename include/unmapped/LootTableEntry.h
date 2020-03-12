#pragma once

#include "LootPoolEntry.h"
#include "LootTable.h"
#include "../json/Value.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootTableEntry : LootPoolEntry {

public:
    ~LootTableEntry();
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    virtual void _isExperimental()const;
    void deserialize(Json::Value);
    LootTableEntry(std::unique_ptr<LootTable>);
};
