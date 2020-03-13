#pragma once

#include <string>
#include <memory>


class JigsawStructureBlockTagRulesRegistry {

public:
    JigsawStructureBlockTagRulesRegistry(); // _ZN36JigsawStructureBlockTagRulesRegistryC2Ev
    void registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>> &&); // _ZN36JigsawStructureBlockTagRulesRegistry21registerBlockTagRulesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt10unique_ptrISt6vectorIS6_I25StructurePoolBlockTagRuleSt14default_deleteIS8_EESaISB_EES9_ISD_EE
    void lookupByName(std::string)const; // _ZNK36JigsawStructureBlockTagRulesRegistry12lookupByNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(); // _ZN36JigsawStructureBlockTagRulesRegistry5clearEv
    ~JigsawStructureBlockTagRulesRegistry(); // _ZN36JigsawStructureBlockTagRulesRegistryD2Ev
};
