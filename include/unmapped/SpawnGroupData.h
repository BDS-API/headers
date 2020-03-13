#pragma once

#include <string>


class SpawnGroupData {

public:
    SpawnGroupData(std::string const&, MobSpawnRules &); // _ZN14SpawnGroupDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER13MobSpawnRules
    void addSpawnRules(MobSpawnRules &); // _ZN14SpawnGroupData13addSpawnRulesER13MobSpawnRules
    std::string getIdentifier()const; // _ZNK14SpawnGroupData13getIdentifierB5cxx11Ev
    void getSpawnRules()const; // _ZNK14SpawnGroupData13getSpawnRulesEv
    ~SpawnGroupData(); // _ZN14SpawnGroupDataD2Ev
};
