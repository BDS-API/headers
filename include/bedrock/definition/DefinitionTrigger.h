#pragma once

#include "../actor/Actor"
#include "../../unmapped/VariantParameterList"


class DefinitionTrigger {

public:

    DefinitionTrigger(DefinitionTrigger&&);
    DefinitionTrigger(void);
    DefinitionTrigger(DefinitionTrigger const&);
    bool canTrigger(Actor const&, VariantParameterList const&)const;
};
