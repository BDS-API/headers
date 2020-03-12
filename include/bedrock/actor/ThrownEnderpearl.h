#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"


class ThrownEnderpearl : Throwable {

public:
    ~ThrownEnderpearl();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
