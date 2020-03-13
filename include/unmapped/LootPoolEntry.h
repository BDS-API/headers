#pragma once

#include <vector>
#include "../json/Value.h"


class LootPoolEntry {

public:
    ~LootPoolEntry(); // _ZN13LootPoolEntryD2Ev
    void getConditions()const; // _ZNK13LootPoolEntry13getConditionsEv
    void getWeight(float)const; // _ZNK13LootPoolEntry9getWeightEf
    void createItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN13LootPoolEntry10createItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    bool isExperimentalOnly()const; // _ZNK13LootPoolEntry18isExperimentalOnlyEv
    void deserialize(Json::Value); // _ZN13LootPoolEntry11deserializeEN4Json5ValueE
    LootPoolEntry(int, int, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN13LootPoolEntryC2EiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
    LootPoolEntry(); // _ZN13LootPoolEntryC2Ev
};
