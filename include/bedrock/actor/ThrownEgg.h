#pragma once

class ThrownEgg : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEgg::~ThrownEgg();

    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
