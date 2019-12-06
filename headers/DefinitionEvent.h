#pragma once

class DefinitionEvent {

public:

    void DefinitionEvent(DefinitionEvent const&);
    void DefinitionEvent(void);
    void evaluateGroups(Actor &, std::vector<DefinitionModifier, std::allocator<DefinitionModifier>> &, VariantParameterList const&);
};
