#pragma once

#include <string>
#include <functional>
#include <unordered_map>


class ActorSpawnRuleBase {

public:
    ~ActorSpawnRuleBase(); // _ZN18ActorSpawnRuleBaseD2Ev
    ActorSpawnRuleBase(); // _ZN18ActorSpawnRuleBaseC2Ev
    void _registerSpawnRules(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::string const&); // _ZN18ActorSpawnRuleBase19_registerSpawnRulesESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiR16BiomeFilterGroupR13MobSpawnRulesEERKSB_RN4Json5ValueES8_
    void _applySpawnCondition(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::string const&); // _ZN18ActorSpawnRuleBase20_applySpawnConditionESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiR16BiomeFilterGroupR13MobSpawnRulesEERN4Json5ValueERKSB_S8_
    void _readJsonHeader(std::string &&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN18ActorSpawnRuleBase15_readJsonHeaderEONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt13unordered_mapIS5_S5_St4hashIS5_ESt8equal_toIS5_ESaISt4pairIKS5_S5_EEE
    void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>); // _ZN18ActorSpawnRuleBase13_getResourcesER19ResourcePackManagerRK13MobSpawnRulesSt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiR16BiomeFilterGroupRS2_EE
};
