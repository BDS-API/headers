#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/container/Container"
#include "../bedrock/item/ItemStack"
#include "../json/Value"


class LootTable {

public:

    LootTable(std::string);
    void shuffleAndSplitItems(std::vector<ItemStack, std::allocator<ItemStack>> &, int, Random &);
    void getAvailableSlots(Container &, Random &);
    void getRandomItems(Random &, LootTableContext &)const;
    void fill(Container &, Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootTable(void);
};
