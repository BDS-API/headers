#pragma once

#include "../../unmapped/VariantParameterList"
#include "../../unmapped/ActorDefinitionGroup"


class ThrownIceBomb : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownIceBomb::~ThrownIceBomb();

    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
