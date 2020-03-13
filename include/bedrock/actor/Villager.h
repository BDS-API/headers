#pragma once

#include <string>
#include "VillagerBase.h"


class Villager : VillagerBase {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Villager15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Villager(); // _ZN8VillagerD2Ev
    virtual void buildDebugInfo(std::string &)const; // _ZNK8Villager14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8VillagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
