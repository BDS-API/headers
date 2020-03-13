#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorSpawnRuleBase.h"
#include <unordered_map>


class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    ~SpawnGroupRegistry(); // _ZN18SpawnGroupRegistryD2Ev
    virtual std::string getRootKey(); // _ZN18SpawnGroupRegistry10getRootKeyB5cxx11Ev
    virtual std::string getFileType(); // _ZN18SpawnGroupRegistry11getFileTypeB5cxx11Ev
    virtual bool processPopulationControl(std::string const&, Json::Value &); // _ZN18SpawnGroupRegistry24processPopulationControlERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN4Json5ValueE
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN18SpawnGroupRegistry17readResourceFilesER19ResourcePackManagerRSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_St4hashIS8_ESt8equal_toIS8_ESaISt4pairIKS8_S8_EEE
    SpawnGroupRegistry(ResourcePackManager &); // _ZN18SpawnGroupRegistryC2ER19ResourcePackManager
    void getSpawnGroup(std::string const&)const; // _ZNK18SpawnGroupRegistry13getSpawnGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _addSpawnRules(std::string const&, MobSpawnRules &); // _ZN18SpawnGroupRegistry14_addSpawnRulesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER13MobSpawnRules
};
