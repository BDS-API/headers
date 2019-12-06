#pragma once

class LootTable {

public:

    void LootTable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void shuffleAndSplitItems(std::vector<ItemStack, std::allocator<ItemStack>> &, int, Random &);
    void getAvailableSlots(Container &, Random &);
    void getRandomItems(Random &, LootTableContext &)const;
    void fill(Container &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    void LootTable(void);
};
