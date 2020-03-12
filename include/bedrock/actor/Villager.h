#pragma once

#include "VillagerBase.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "unmapped/ActorDefinitionIdentifier.h"


class Villager : VillagerBase {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void buildDebugInfo(std::string &)const;
    ~Villager();
    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
