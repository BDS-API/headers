#pragma once

#include "Throwable.h"


class Snowball : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Snowball15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Snowball(); // _ZN8SnowballD2Ev
    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8SnowballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
