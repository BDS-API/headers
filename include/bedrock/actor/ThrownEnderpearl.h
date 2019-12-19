#pragma once

class ThrownEnderpearl : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEnderpearl::~ThrownEnderpearl();

    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
