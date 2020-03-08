#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Villager : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Villager::~Villager()
    virtual void buildDebugInfo(std::string &)const;

    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
