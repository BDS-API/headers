#pragma once

#include "LootPoolEntry.h"
#include <memory>
#include <vector>
#include "../json/Value.h"


class LootTableEntry : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN14LootTableEntry11_createItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    virtual void _isExperimental()const; // _ZNK14LootTableEntry15_isExperimentalEv
    ~LootTableEntry(); // _ZN14LootTableEntryD2Ev
    void deserialize(Json::Value); // _ZN14LootTableEntry11deserializeEN4Json5ValueE
    LootTableEntry(std::unique_ptr<LootTable>); // _ZN14LootTableEntryC2ESt10unique_ptrI9LootTableSt14default_deleteIS1_EE
};
