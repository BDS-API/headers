#pragma once

class ThrownEnderpearl : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ThrownEnderpearl();

    void ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
