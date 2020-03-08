#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/item/condition/LootItemCondition"
#include "../bedrock/item/ItemStack"
#include "../json/Value"


class LootPoolEntry {

public:
    virtual LootPoolEntry::~LootPoolEntry()

    void getConditions()const;
    void getWeight(float)const;
    void createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    bool isExperimentalOnly()const;
    void deserialize(Json::Value);
    LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootPoolEntry(void);
};
