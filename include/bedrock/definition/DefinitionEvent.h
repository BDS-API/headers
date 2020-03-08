#pragma once

#include "../actor/Actor"
#include "../../unmapped/VariantParameterList"


class DefinitionEvent {

public:

    DefinitionEvent(DefinitionEvent const&);
    DefinitionEvent(void);
    void evaluateGroups(Actor &, std::vector<DefinitionModifier, std::allocator<DefinitionModifier>> &, VariantParameterList const&);
};
