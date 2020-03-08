#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownEnderpearl : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ThrownEnderpearl::~ThrownEnderpearl()

    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
