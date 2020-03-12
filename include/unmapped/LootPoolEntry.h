#pragma once

#include <vector>
#include "../json/Value.h"


class LootPoolEntry {

public:
    ~LootPoolEntry();
    LootPoolEntry();
    void getWeight(float)const;
    void createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
    bool isExperimentalOnly()const;
    void deserialize(Json::Value);
    LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
    void getConditions()const;
};
