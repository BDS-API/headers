#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class ThrownEgg : Throwable {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ThrownEgg::~ThrownEgg()

    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
