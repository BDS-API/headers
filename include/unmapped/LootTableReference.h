#pragma once

#include "LootPoolEntry.h"
#include <string>
#include <vector>
#include "../json/Value.h"


class LootTableReference : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN18LootTableReference11_createItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    virtual void _isExperimental()const; // _ZNK18LootTableReference15_isExperimentalEv
    ~LootTableReference(); // _ZN18LootTableReferenceD2Ev
    void deserialize(Json::Value, int, int, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN18LootTableReference11deserializeEN4Json5ValueEiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    LootTableReference(int, int, std::vector<std::unique_ptr<LootItemCondition>> &, std::string); // _ZN18LootTableReferenceC2EiiRSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
