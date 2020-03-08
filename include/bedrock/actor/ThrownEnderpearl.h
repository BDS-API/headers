#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownEnderpearl : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEnderpearl::~ThrownEnderpearl()

    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
