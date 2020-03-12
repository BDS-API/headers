#pragma once

#include <vector>


class DefinitionEvent {

public:
    ~DefinitionEvent();
    DefinitionEvent(DefinitionEvent const&);
    void evaluateGroups(Actor &, std::vector<DefinitionModifier> &, VariantParameterList const&);
    DefinitionEvent();
};
