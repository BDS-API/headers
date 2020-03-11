#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/Actor.h"
#include "./IllagerBeastBlockedComponent.h"


class IllagerBeastBlockedComponent {

public:

    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent &&);
    void initFromDefinition(Actor &);
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
};
