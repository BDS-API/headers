#pragma once

#include <string>
#include <memory>


class JigsawStructureElementRegistry {

public:
    JigsawStructureElementRegistry(); // _ZN30JigsawStructureElementRegistryC2Ev
    void registerStructureElement(std::string, std::unique_ptr<StructurePoolElement> &&); // _ZN30JigsawStructureElementRegistry24registerStructureElementENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt10unique_ptrI20StructurePoolElementSt14default_deleteIS7_EE
    void lookupByName(std::string)const; // _ZNK30JigsawStructureElementRegistry12lookupByNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(); // _ZN30JigsawStructureElementRegistry5clearEv
    ~JigsawStructureElementRegistry(); // _ZN30JigsawStructureElementRegistryD2Ev
};
