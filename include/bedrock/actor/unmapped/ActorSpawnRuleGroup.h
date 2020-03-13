#pragma once

#include <string>
#include "../../../unmapped/MobSpawnRules.h"
#include "ActorSpawnRuleBase.h"
#include <unordered_map>


class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    ~ActorSpawnRuleGroup(); // _ZN19ActorSpawnRuleGroupD2Ev
    virtual std::string getRootKey(); // _ZN19ActorSpawnRuleGroup10getRootKeyB5cxx11Ev
    virtual std::string getFileType(); // _ZN19ActorSpawnRuleGroup11getFileTypeB5cxx11Ev
    virtual bool processPopulationControl(std::string const&, Json::Value &); // _ZN19ActorSpawnRuleGroup24processPopulationControlERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN4Json5ValueE
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN19ActorSpawnRuleGroup17readResourceFilesER19ResourcePackManagerRSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_St4hashIS8_ESt8equal_toIS8_ESaISt4pairIKS8_S8_EEE
    ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &); // _ZN19ActorSpawnRuleGroupC2ER19ResourcePackManagerR24IWorldRegistriesProvider
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const; // _ZNK19ActorSpawnRuleGroup17getActorSpawnPoolERK25ActorDefinitionIdentifier
    void getDelayEnd(std::string)const; // _ZNK19ActorSpawnRuleGroup11getDelayEndENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &); // _ZN19ActorSpawnRuleGroup13resetDelayEndE13MobSpawnRulesmR6Random
    void offSetDelayByCurrentTick(Tick const&); // _ZN19ActorSpawnRuleGroup24offSetDelayByCurrentTickERK4Tick
};
