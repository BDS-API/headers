#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Snowball : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Snowball::~Snowball()

    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
