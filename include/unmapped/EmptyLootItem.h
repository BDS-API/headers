#pragma once

#include "LootPoolEntry.h"
#include "../bedrock/item/condition/LootItemCondition.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class EmptyLootItem : LootPoolEntry {

public:
    virtual void _isExperimental()const;
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    ~EmptyLootItem();
    EmptyLootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
};
