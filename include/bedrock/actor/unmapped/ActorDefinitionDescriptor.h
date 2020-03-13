#pragma once

#include <string>


class ActorDefinitionDescriptor {

public:
    ~ActorDefinitionDescriptor(); // _ZN25ActorDefinitionDescriptorD2Ev
    void combine(ActorDefinitionDescriptor const&); // _ZN25ActorDefinitionDescriptor7combineERKS_
    void subtract(ActorDefinitionDescriptor const&); // _ZN25ActorDefinitionDescriptor8subtractERKS_
    void contains(ActorDefinitionDescriptor const&)const; // _ZNK25ActorDefinitionDescriptor8containsERKS_
    void overlaps(ActorDefinitionDescriptor const&)const; // _ZNK25ActorDefinitionDescriptor8overlapsERKS_
    void empty()const; // _ZNK25ActorDefinitionDescriptor5emptyEv
    bool hasComponent(Util::HashString const&)const; // _ZNK25ActorDefinitionDescriptor12hasComponentERKN4Util10HashStringE
    void executeEvent(Actor &, std::string const&, VariantParameterList const&); // _ZN25ActorDefinitionDescriptor12executeEventER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK20VariantParameterList
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&); // _ZN25ActorDefinitionDescriptor14executeTriggerER5ActorRK17DefinitionTriggerRK20VariantParameterList
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&); // _ZN25ActorDefinitionDescriptor19forceExecuteTriggerER5ActorRK17DefinitionTriggerRK20VariantParameterList
    ActorDefinitionDescriptor(); // _ZN25ActorDefinitionDescriptorC2Ev
    ActorDefinitionDescriptor(ActorDefinitionDescriptor &&); // _ZN25ActorDefinitionDescriptorC2EOS_
};
