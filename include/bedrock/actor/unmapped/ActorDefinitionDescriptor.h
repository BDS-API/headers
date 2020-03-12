#pragma once

#include <string>
#include "../../../unmapped/HashString.h"
#include "../Actor.h"
#include "../../../unmapped/VariantParameterList.h"
#include "../../definition/DefinitionTrigger.h"


class ActorDefinitionDescriptor {

public:
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void executeEvent(Actor &, std::string const&, VariantParameterList const&);
    ~ActorDefinitionDescriptor();
    void overlaps(ActorDefinitionDescriptor const&)const;
    ActorDefinitionDescriptor();
    void subtract(ActorDefinitionDescriptor const&);
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void combine(ActorDefinitionDescriptor const&);
    void empty()const;
    void contains(ActorDefinitionDescriptor const&)const;
    bool hasComponent(Util::HashString const&)const;
    ActorDefinitionDescriptor(ActorDefinitionDescriptor &&);
};
