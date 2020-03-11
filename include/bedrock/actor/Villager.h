#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "./VillagerBase.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>


class Villager : VillagerBase {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Villager();
    virtual void buildDebugInfo(std::string &)const;

    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
