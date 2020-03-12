#pragma once

#include "LootPoolEntry.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/item/condition/LootItemCondition.h"
#include "../json/Value.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/item/function/LootItemFunction.h"
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootItem : LootPoolEntry {

public:
    ~LootItem();
    virtual void _isExperimental()const;
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
    LootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, Item const*, std::vector<std::unique_ptr<LootItemFunction>> &);
};
