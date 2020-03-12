#pragma once

#include "DefinitionModifier.h"
#include "../../unmapped/VariantParameterList.h"
#include <vector>
#include "../actor/Actor.h"


class DefinitionEvent {

public:
    ~DefinitionEvent();
    void evaluateGroups(Actor &, std::vector<DefinitionModifier> &, VariantParameterList const&);
    DefinitionEvent();
    DefinitionEvent(DefinitionEvent const&);
};
