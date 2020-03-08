#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/description/component/NameableDescription"
#include "../bedrock/actor/unmapped/ActorInteraction"


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
