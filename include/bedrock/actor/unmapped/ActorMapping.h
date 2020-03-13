#pragma once

#include <string>


class ActorMapping {

public:
    ActorMapping(std::string const&, std::string const&); // _ZN12ActorMappingC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    ~ActorMapping(); // _ZN12ActorMappingD2Ev
//  std::string getMappingName(ActorTypeNamespaceRules)const; //TODO: incomplete function definition // _ZNK12ActorMapping14getMappingNameB5cxx11E23ActorTypeNamespaceRules
    void getCanonicalName()const; // _ZNK12ActorMapping16getCanonicalNameEv
    ActorMapping(std::string const&, std::string const&, std::string const&); // _ZN12ActorMappingC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    ActorMapping(ActorMapping &&); // _ZN12ActorMappingC2EOS_
    ActorMapping(ActorMapping const&); // _ZN12ActorMappingC2ERKS_
};
