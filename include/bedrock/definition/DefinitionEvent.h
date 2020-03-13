#pragma once

#include <vector>


class DefinitionEvent {

public:
    ~DefinitionEvent(); // _ZN15DefinitionEventD2Ev
    DefinitionEvent(DefinitionEvent const&); // _ZN15DefinitionEventC2ERKS_
    DefinitionEvent(); // _ZN15DefinitionEventC2Ev
    void evaluateGroups(Actor &, std::vector<DefinitionModifier> &, VariantParameterList const&); // _ZN15DefinitionEvent14evaluateGroupsER5ActorRSt6vectorI18DefinitionModifierSaIS3_EERK20VariantParameterList
};
