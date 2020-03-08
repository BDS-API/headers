#pragma once

#include "../bedrock/actor/Actor"


class NameableComponent {

public:

    NameableComponent(NameableComponent&&);
    NameableComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, NameableDescription const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getAlwaysShow(void);
    void nameEntity(Actor &, std::string const&);
};
