#pragma once

#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include <vector>


class LootPool {

public:

    ~LootPool();
    LootPool();
    void addRandomItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void addTier(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &, int);
    void addRandomItems(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void deserialize(Json::Value);
};
