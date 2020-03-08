#pragma once

#include "../bedrock/actor/Actor"


class IllagerBeastBlockedComponent {

public:

    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent&&);
    void initFromDefinition(Actor &);
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
};
