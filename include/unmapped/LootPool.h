#pragma once

#include "../bedrock/item/ItemStack"
#include "../json/Value"
#include "../bedrock/util/Random"


class LootPool {

public:

    LootPool(void);
    void addRandomItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void addTier(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &, int);
    void addRandomItems(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void deserialize(Json::Value);
};
