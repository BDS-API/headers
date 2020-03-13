#pragma once

#include <string>
#include <vector>
#include "../json/Value.h"


class LootTable {

public:
    ~LootTable(); // _ZN9LootTableD2Ev
    LootTable(std::string); // _ZN9LootTableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getDir()const; // _ZNK9LootTable6getDirB5cxx11Ev
    void shuffleAndSplitItems(std::vector<ItemStack> &, int, Random &); // _ZN9LootTable20shuffleAndSplitItemsERSt6vectorI9ItemStackSaIS1_EEiR6Random
    void getAvailableSlots(Container &, Random &); // _ZN9LootTable17getAvailableSlotsER9ContainerR6Random
    void getRandomItems(Random &, LootTableContext &)const; // _ZNK9LootTable14getRandomItemsER6RandomR16LootTableContext
    void fill(Container &, Random &, LootTableContext &); // _ZN9LootTable4fillER9ContainerR6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN9LootTable11deserializeEN4Json5ValueE
    LootTable(); // _ZN9LootTableC2Ev
};
