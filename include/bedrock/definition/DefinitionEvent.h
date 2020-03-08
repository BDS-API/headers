#pragma once

#include "../../unmapped/VariantParameterList"
#include "../actor/Actor"


class DefinitionEvent {

public:

    DefinitionEvent(DefinitionEvent const&);
    DefinitionEvent(void);
    void evaluateGroups(Actor &, std::vector<DefinitionModifier, std::allocator<DefinitionModifier>> &, VariantParameterList const&);
};
