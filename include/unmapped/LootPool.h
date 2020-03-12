#pragma once

#include <vector>
#include "../json/Value.h"


class LootPool {

public:
    void addTier(std::vector<ItemStack> &, Random &, LootTableContext &, int);
    void addRandomItems(std::vector<ItemStack> &, Random &, LootTableContext &);
    ~LootPool();
    void addRandomItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    LootPool();
    void deserialize(Json::Value);
};
