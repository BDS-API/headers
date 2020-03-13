#pragma once

#include <string>


class LootTables {

public:
    LootTables(); // _ZN10LootTablesC2Ev
    ~LootTables(); // _ZN10LootTablesD2Ev
    void lookupByName(std::string const&, ResourcePackManager &); // _ZN10LootTables12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER19ResourcePackManager
};
