#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "./Throwable.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Snowball : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Snowball();

    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
