#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownEgg : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownEgg::~ThrownEgg()

    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
