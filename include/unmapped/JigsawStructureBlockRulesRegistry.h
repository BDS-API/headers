#pragma once

#include <string>
#include <memory>


class JigsawStructureBlockRulesRegistry {

public:
    JigsawStructureBlockRulesRegistry(); // _ZN33JigsawStructureBlockRulesRegistryC2Ev
    void registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>> &&); // _ZN33JigsawStructureBlockRulesRegistry18registerBlockRulesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt10unique_ptrISt6vectorIS6_I22StructurePoolBlockRuleSt14default_deleteIS8_EESaISB_EES9_ISD_EE
    void lookupByName(std::string)const; // _ZNK33JigsawStructureBlockRulesRegistry12lookupByNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(); // _ZN33JigsawStructureBlockRulesRegistry5clearEv
    ~JigsawStructureBlockRulesRegistry(); // _ZN33JigsawStructureBlockRulesRegistryD2Ev
};
