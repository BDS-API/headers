#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"


class ThrownIceBomb : Throwable {

public:
    ~ThrownIceBomb();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
