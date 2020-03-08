#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/description/component/NameableDescription"
#include "../bedrock/actor/Player"


class NameableComponent {

public:

    NameableComponent(NameableComponent&&);
    NameableComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, NameableDescription const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getAlwaysShow();
    void nameEntity(Actor &, std::string const&);
};
