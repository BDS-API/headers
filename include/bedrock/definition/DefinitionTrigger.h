#pragma once

#include "../actor/Actor"


class DefinitionTrigger {

public:

    DefinitionTrigger(DefinitionTrigger&&);
    DefinitionTrigger(void);
    DefinitionTrigger(DefinitionTrigger const&);
    bool canTrigger(Actor const&, VariantParameterList const&)const;
};
