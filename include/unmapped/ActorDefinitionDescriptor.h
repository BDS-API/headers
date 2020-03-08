#pragma once

#include "../bedrock/actor/Actor"


class ActorDefinitionDescriptor {

public:

    void combine(ActorDefinitionDescriptor const&);
    void subtract(ActorDefinitionDescriptor const&);
    void contains(ActorDefinitionDescriptor const&)const;
    void overlaps(ActorDefinitionDescriptor const&)const;
    void empty(void)const;
    bool hasComponent(Util::HashString const&)const;
    void executeEvent(Actor &, std::string const&, VariantParameterList const&);
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    ActorDefinitionDescriptor(void);
    ActorDefinitionDescriptor(ActorDefinitionDescriptor&&);
};
