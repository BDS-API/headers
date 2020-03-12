#pragma once

#include "Throwable.h"


class ThrownEnderpearl : Throwable {

public:
    ~ThrownEnderpearl();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
