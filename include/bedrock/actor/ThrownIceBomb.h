#pragma once

#include "Throwable.h"


class ThrownIceBomb : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN13ThrownIceBomb15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~ThrownIceBomb(); // _ZN13ThrownIceBombD2Ev
    ThrownIceBomb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13ThrownIceBombC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
