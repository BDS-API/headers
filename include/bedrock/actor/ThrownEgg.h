#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "./Throwable.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class ThrownEgg : Throwable {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ThrownEgg();

    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
