#pragma once

#include "LootPoolEntry.h"
#include <vector>
#include "../json/Value.h"


class LootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    ~LootItem();
    virtual void _isExperimental()const;
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
    LootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, Item const*, std::vector<std::unique_ptr<LootItemFunction>> &);
};
