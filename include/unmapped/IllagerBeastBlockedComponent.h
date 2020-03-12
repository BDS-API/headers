#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/Actor.h"


class IllagerBeastBlockedComponent {

public:
    void initFromDefinition(Actor &);
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent &&);
};
