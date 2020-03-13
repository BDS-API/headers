#pragma once

#include "Throwable.h"


class ThrownEgg : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9ThrownEgg15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~ThrownEgg(); // _ZN9ThrownEggD2Ev
    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9ThrownEggC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
