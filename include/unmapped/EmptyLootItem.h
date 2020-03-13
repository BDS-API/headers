#pragma once

#include "LootPoolEntry.h"
#include <vector>


class EmptyLootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN13EmptyLootItem11_createItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    virtual void _isExperimental()const; // _ZNK13EmptyLootItem15_isExperimentalEv
    ~EmptyLootItem(); // _ZN13EmptyLootItemD2Ev
    EmptyLootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN13EmptyLootItemC2EiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE
};
