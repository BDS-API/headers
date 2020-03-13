#pragma once

#include <string>
#include <memory>


class JigsawStructureRegistry {

public:
    JigsawStructureRegistry(); // _ZN23JigsawStructureRegistryC2Ev
    ~JigsawStructureRegistry(); // _ZN23JigsawStructureRegistryD2Ev
    void clear(); // _ZN23JigsawStructureRegistry5clearEv
    void registerPool(std::unique_ptr<StructureTemplatePool> &&); // _ZN23JigsawStructureRegistry12registerPoolEOSt10unique_ptrI21StructureTemplatePoolSt14default_deleteIS1_EE
    void lookupByName(std::string)const; // _ZNK23JigsawStructureRegistry12lookupByNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getJigsawStructureBlockRulesRegistry()const; // _ZNK23JigsawStructureRegistry36getJigsawStructureBlockRulesRegistryEv
    void getJigsawStructureBlockRulesRegistry(); // _ZN23JigsawStructureRegistry36getJigsawStructureBlockRulesRegistryEv
    void getJigsawStructureBlockTagRulesRegistry()const; // _ZNK23JigsawStructureRegistry39getJigsawStructureBlockTagRulesRegistryEv
    void getJigsawStructureBlockTagRulesRegistry(); // _ZN23JigsawStructureRegistry39getJigsawStructureBlockTagRulesRegistryEv
    void getJigsawStructureActorRulesRegistry()const; // _ZNK23JigsawStructureRegistry36getJigsawStructureActorRulesRegistryEv
    void getJigsawStructureActorRulesRegistry(); // _ZN23JigsawStructureRegistry36getJigsawStructureActorRulesRegistryEv
    void getJigsawStructureElementRegistry()const; // _ZNK23JigsawStructureRegistry33getJigsawStructureElementRegistryEv
    void getJigsawStructureElementRegistry(); // _ZN23JigsawStructureRegistry33getJigsawStructureElementRegistryEv
};
