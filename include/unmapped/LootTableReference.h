#pragma once

#include <string>
#include "LootPoolEntry.h"
#include <vector>
#include "../json/Value.h"


class LootTableReference : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    ~LootTableReference();
    virtual void _isExperimental()const;
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
    LootTableReference(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, std::string);
};
