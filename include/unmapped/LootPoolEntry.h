#pragma once

#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include <vector>
#include "../bedrock/item/condition/LootItemCondition.h"


class LootPoolEntry {

public:
    virtual ~LootPoolEntry();

    void getConditions()const;
    void getWeight(float)const;
    void createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    bool isExperimentalOnly()const;
    void deserialize(Json::Value);
    LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootPoolEntry();
};
