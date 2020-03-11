#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "../Actor.h"
#include "../../../unmapped/VariantParameterList.h"
#include "../../../unmapped/HashString.h"
#include "./ActorDefinitionDescriptor.h"
#include <string>


class ActorDefinitionDescriptor {

public:

    ~ActorDefinitionDescriptor();
    void combine(ActorDefinitionDescriptor const&);
    void subtract(ActorDefinitionDescriptor const&);
    void contains(ActorDefinitionDescriptor const&)const;
    void overlaps(ActorDefinitionDescriptor const&)const;
    void empty()const;
    bool hasComponent(Util::HashString const&)const;
    void executeEvent(Actor &, std::string const&, VariantParameterList const&);
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    ActorDefinitionDescriptor();
    ActorDefinitionDescriptor(ActorDefinitionDescriptor &&);
};
