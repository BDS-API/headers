#pragma once

class ThrownEgg : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ThrownEgg();

    void ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
