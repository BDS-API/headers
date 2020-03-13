#pragma once



class DefinitionTrigger {

public:
    ~DefinitionTrigger(); // _ZN17DefinitionTriggerD2Ev
    DefinitionTrigger(DefinitionTrigger &&); // _ZN17DefinitionTriggerC2EOS_
    DefinitionTrigger(); // _ZN17DefinitionTriggerC2Ev
    DefinitionTrigger(DefinitionTrigger const&); // _ZN17DefinitionTriggerC2ERKS_
    bool canTrigger(Actor const&, VariantParameterList const&)const; // _ZNK17DefinitionTrigger10canTriggerERK5ActorRK20VariantParameterList
};
