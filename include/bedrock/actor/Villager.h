#pragma once

#include "VillagerBase.h"
#include <string>


class Villager : public VillagerBase {

public:
    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Villager15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Villager(); // _ZN8VillagerD2Ev
    virtual void __fake_function0(); // fake
    virtual void buildDebugInfo(std::string &)const; // _ZNK8Villager14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8VillagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
