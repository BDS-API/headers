#pragma once

class Villager : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Villager();
    virtual void buildDebugInfo(std::string &)const;

    void Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
