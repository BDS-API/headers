#pragma once

#include "Throwable.h"


class ThrownIceBomb : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~ThrownIceBomb();
    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
