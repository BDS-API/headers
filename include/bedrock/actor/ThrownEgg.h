#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"


class ThrownEgg : Throwable {

public:
    ~ThrownEgg();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ThrownEgg(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
