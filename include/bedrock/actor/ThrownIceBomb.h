#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownIceBomb : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownIceBomb::~ThrownIceBomb()

    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
