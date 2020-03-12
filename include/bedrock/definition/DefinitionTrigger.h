#pragma once



class DefinitionTrigger {

public:
    DefinitionTrigger(DefinitionTrigger &&);
    DefinitionTrigger();
    bool canTrigger(Actor const&, VariantParameterList const&)const;
    ~DefinitionTrigger();
    DefinitionTrigger(DefinitionTrigger const&);
};
