#pragma once

class LootPoolEntry {

public:
    virtual ~LootPoolEntry();

    void getConditions(void)const;
    void getWeight(float)const;
    void createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    bool isExperimentalOnly(void)const;
    void deserialize(Json::Value);
    void LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    void LootPoolEntry(void);
};
