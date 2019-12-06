#pragma once

class ThrownIceBomb : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ThrownIceBomb();

    void ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
