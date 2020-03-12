#pragma once

#include "LootPoolEntry.h"
#include <string>
#include "../bedrock/item/condition/LootItemCondition.h"
#include "../json/Value.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootTableReference : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    ~LootTableReference();
    virtual void _isExperimental()const;
    LootTableReference(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, std::string);
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
};
