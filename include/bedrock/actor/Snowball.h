#pragma once

#include "Throwable.h"


class Snowball : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~Snowball();
    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
