#pragma once

class LootTable {

public:

    void LootTable(std::string);
    void shuffleAndSplitItems(std::vector<ItemStack, std::allocator<ItemStack>> &, int, Random &);
    void getAvailableSlots(Container &, Random &);
    void getRandomItems(Random &, LootTableContext &)const;
    void fill(Container &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    void LootTable(void);
};
