#pragma once

#include "../../unmapped/VariantParameterList"
#include "../../unmapped/ActorDefinitionGroup"


class ThrownEnderpearl : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEnderpearl::~ThrownEnderpearl();

    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
