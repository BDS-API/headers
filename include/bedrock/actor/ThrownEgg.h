#pragma once

#include "../../unmapped/VariantParameterList"
#include "../../unmapped/ActorDefinitionGroup"


class ThrownEgg : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEgg::~ThrownEgg();

    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
