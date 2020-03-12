#pragma once

#include "../bedrock/actor/Player.h"
#include <string>
#include "../bedrock/description/component/NameableDescription.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class NameableComponent {

public:
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, NameableDescription const&);
    void getAlwaysShow();
    NameableComponent(NameableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void nameEntity(Actor &, std::string const&);
    NameableComponent();
};
