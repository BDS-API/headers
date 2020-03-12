#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"


class Snowball : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~Snowball();
    Snowball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
