#pragma once

#include <string>
#include "VillagerBase.h"


class Villager : VillagerBase {

public:
    virtual void buildDebugInfo(std::string &)const;
    ~Villager();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
