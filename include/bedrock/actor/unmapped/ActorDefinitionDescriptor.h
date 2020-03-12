#pragma once

#include <string>


class ActorDefinitionDescriptor {

public:
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    ActorDefinitionDescriptor(ActorDefinitionDescriptor &&);
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void executeEvent(Actor &, std::string const&, VariantParameterList const&);
    ActorDefinitionDescriptor();
    void overlaps(ActorDefinitionDescriptor const&)const;
    void empty()const;
    ~ActorDefinitionDescriptor();
    void contains(ActorDefinitionDescriptor const&)const;
    void subtract(ActorDefinitionDescriptor const&);
    bool hasComponent(Util::HashString const&)const;
    void combine(ActorDefinitionDescriptor const&);
};
