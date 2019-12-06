#pragma once

class Snowball : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Snowball();

    void Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
