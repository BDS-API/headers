#pragma once

#include <vector>
#include "../json/Value.h"


class LootPool {

public:
    ~LootPool(); // _ZN8LootPoolD2Ev
    LootPool(); // _ZN8LootPoolC2Ev
    void addRandomItem(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN8LootPool13addRandomItemERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    void addTier(std::vector<ItemStack> &, Random &, LootTableContext &, int); // _ZN8LootPool7addTierERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContexti
    void addRandomItems(std::vector<ItemStack> &, Random &, LootTableContext &); // _ZN8LootPool14addRandomItemsERSt6vectorI9ItemStackSaIS1_EER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN8LootPool11deserializeEN4Json5ValueE
};
