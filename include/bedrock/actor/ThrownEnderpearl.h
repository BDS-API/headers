#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "./Throwable.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class ThrownEnderpearl : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ThrownEnderpearl();

    ThrownEnderpearl(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
