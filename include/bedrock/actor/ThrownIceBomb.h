#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownIceBomb : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ThrownIceBomb::~ThrownIceBomb()

    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
