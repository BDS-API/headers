#pragma once

class ThrownIceBomb : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownIceBomb::~ThrownIceBomb();

    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
