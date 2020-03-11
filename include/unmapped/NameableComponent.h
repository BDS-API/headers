#pragma once

#include "./NameableComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/description/component/NameableDescription.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include <string>


class NameableComponent {

public:

    NameableComponent(NameableComponent &&);
    NameableComponent();
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, NameableDescription const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getAlwaysShow();
    void nameEntity(Actor &, std::string const&);
};
