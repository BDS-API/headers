#pragma once

#include "Throwable.h"


class ThrownEgg : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~ThrownEgg();
    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
