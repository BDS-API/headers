#pragma once

#include "../../unmapped/VariantParameterList"
#include "../../unmapped/ActorDefinitionGroup"


class Snowball : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Snowball::~Snowball();

    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
