#pragma once

#include "../json/Value.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootPool {

public:
    ~LootPool();
    LootPool();
    void addTier(std::vector<ItemStack> &, Random &, LootTableContext &, int);
    void deserialize(Json::Value);
    void addRandomItems(std::vector<ItemStack> &, Random &, LootTableContext &);
    void addRandomItem(std::vector<ItemStack> &, Random &, LootTableContext &);
};
