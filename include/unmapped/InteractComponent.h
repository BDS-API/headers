#pragma once

#include "../bedrock/actor/Actor"


class InteractComponent {

public:

    InteractComponent(InteractComponent&&);
    void setCooldownCounter(short);
    void initFromDefinition(Actor &, InteractDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &);
    void getCooldownCounter(void)const;
};
