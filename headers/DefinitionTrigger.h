#pragma once

class DefinitionTrigger {

public:

    void DefinitionTrigger(DefinitionTrigger&&);
    void DefinitionTrigger(void);
    void DefinitionTrigger(DefinitionTrigger const&);
    bool canTrigger(Actor const&, VariantParameterList const&)const;
};
