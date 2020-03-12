#pragma once

#include "../bedrock/item/condition/LootItemCondition.h"
#include "../json/Value.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


class LootPoolEntry {

public:
    ~LootPoolEntry();
    void getConditions()const;
    LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition>> &);
    LootPoolEntry();
    bool isExperimentalOnly()const;
    void deserialize(Json::Value);
    void getWeight(float)const;
    void createItem(std::vector<ItemStack> &, Random &, LootTableContext &);
};
