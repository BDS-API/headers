#pragma once

#include <string>
#include <memory>


class JigsawStructureActorRulesRegistry {

public:
    JigsawStructureActorRulesRegistry(); // _ZN33JigsawStructureActorRulesRegistryC2Ev
    void registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>> &&); // _ZN33JigsawStructureActorRulesRegistry18registerActorRulesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt10unique_ptrISt6vectorIS6_I22StructurePoolActorRuleSt14default_deleteIS8_EESaISB_EES9_ISD_EE
    void lookupByName(std::string)const; // _ZNK33JigsawStructureActorRulesRegistry12lookupByNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(); // _ZN33JigsawStructureActorRulesRegistry5clearEv
    ~JigsawStructureActorRulesRegistry(); // _ZN33JigsawStructureActorRulesRegistryD2Ev
};
