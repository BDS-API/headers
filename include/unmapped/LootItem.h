#pragma once

#include "LootPoolEntry.h"
#include <vector>
#include "../json/Value.h"


class LootItem : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN8LootItem11_createItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    virtual void _isExperimental()const; // _ZNK8LootItem15_isExperimentalEv
    ~LootItem(); // _ZN8LootItemD2Ev
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN8LootItem11deserializeEN4Json5ValueEiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    LootItem(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, Item const*, std::vector<std::unique_ptr<LootItemFunction>> &); // _ZN8LootItemC2EiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EEPK4ItemRS0_IS1_I16LootItemFunctionS3_ISC_EESaISE_EE
};
