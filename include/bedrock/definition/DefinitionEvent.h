#pragma once

#include "./DefinitionModifier.h"
#include <memory>
#include "../../unmapped/VariantParameterList.h"
#include "../actor/Actor.h"
#include <vector>
#include "./DefinitionEvent.h"


class DefinitionEvent {

public:

    ~DefinitionEvent();
    DefinitionEvent(DefinitionEvent const&);
    DefinitionEvent();
    void evaluateGroups(Actor &, std::vector<DefinitionModifier, std::allocator<DefinitionModifier>> &, VariantParameterList const&);
};
