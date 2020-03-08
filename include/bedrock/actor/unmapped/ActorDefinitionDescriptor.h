#pragma once

#include "../Actor"
#include "../../definition/DefinitionTrigger"
#include "../../../unmapped/HashString"
#include "../../../unmapped/VariantParameterList"


class ActorDefinitionDescriptor {

public:

    void combine(ActorDefinitionDescriptor const&);
    void subtract(ActorDefinitionDescriptor const&);
    void contains(ActorDefinitionDescriptor const&)const;
    void overlaps(ActorDefinitionDescriptor const&)const;
    void empty()const;
    bool hasComponent(Util::HashString const&)const;
    void executeEvent(Actor &, std::string const&, VariantParameterList const&);
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    ActorDefinitionDescriptor(void);
    ActorDefinitionDescriptor(ActorDefinitionDescriptor&&);
};
