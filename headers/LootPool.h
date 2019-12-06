#pragma once

class LootPool {

public:

    void LootPool(void);
    void addRandomItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void addTier(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &, int);
    void addRandomItems(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    void deserialize(Json::Value);
};
