#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "./DefinitionTrigger.h"
#include "../actor/Actor.h"


class DefinitionTrigger {

public:

    ~DefinitionTrigger();
    DefinitionTrigger(DefinitionTrigger &&);
    DefinitionTrigger();
    DefinitionTrigger(DefinitionTrigger const&);
    bool canTrigger(Actor const&, VariantParameterList const&)const;
};
